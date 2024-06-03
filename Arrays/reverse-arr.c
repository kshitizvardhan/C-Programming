#include <stdio.h>

void reverseArr(int arr[]){
    int length = sizeof(arr)/sizeof(arr[0]);
    int i=0, j=length-1;
    while(i!=j){
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
        i++;
        j--;
    }
    return;
}

int main(){
    int size;
    printf("Enter size of arr: ");
    scanf("%d",&size);

    int arr[size];
    // input array
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    reverseArr(arr);
    // print array
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}