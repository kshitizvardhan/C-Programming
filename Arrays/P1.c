#include <stdio.h>

int main(){
    int size;
    printf("Enter size of arr: ");
    scanf("%d",&size);

    int arr[size];
    // input array
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    // print array
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }

    return 0;

}