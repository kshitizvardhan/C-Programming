#include <stdio.h>

int main(){
    int arr[3]={1,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);      // total memory allocations, divided by the 1 element allocation ==> gives number of elements.
    printf("The number of element in given array is: %d",size);
    printf("\n");
    printf("The last index in given array is: %d",size-1);
    return 0;
}