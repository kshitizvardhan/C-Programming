#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr = (int*)malloc(10*sizeof(int));
    printf("%p\n",&ptr);

    ptr = realloc(ptr, 20*sizeof(int));         // the pointer you need to realloc and the new size
    printf("%p\n",&ptr);

    ptr = realloc(ptr, 20000*sizeof(int));
    printf("%p\n",&ptr);
    // now the address changes
    return 0;


}

// Output
// 1300233704
// 1300233704
// As you could see the addresses are the same... so on realloc the compiler sees if there is space in memory contigously then just
// increase the exisiting allocated memory...if the size is big and there is already some other values stored and cannot be given
// memory contigously then... it gives the realloc memory on new address, and whole memory goes to the new address.
