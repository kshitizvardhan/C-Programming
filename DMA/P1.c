#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr = (int*)malloc(10*sizeof(int));
    int *ptr_head = ptr;
    printf("%d\n",*ptr);      // Malloc initialises all the allocated memory blocks with garbage value.
    ptr++;
    int *a = (int*)calloc(10,sizeof(int));  // calloc initialises all the allocated memory blocks with value 0.
    printf("%d",*a);

    free(ptr_head);     // You always need to free from the first member...if ptr is ++ or -- and free(ptr), then this would lead to error.
    free(a);            // Here no ++ or --, so a is pointing to first member only.
    return 0;
}

// Output
// 7209065
// 0