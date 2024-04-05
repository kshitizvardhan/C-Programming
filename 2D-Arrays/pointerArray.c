#include <stdio.h>
#include <limits.h>

void double1(int arr[], int n){
    for(int i=0; i<n; i++){
        arr[i] = 2*arr[i];
    }
}

void largest(int arr[], int n, int *ptr){
    for(int i=0; i<n; i++){
        if(arr[i]>*ptr){
            *ptr = arr[i];
        }
    }
}

int main(){
    int arr[3] = {1,2,3};
    double1(arr,3);
    int max = INT_MIN;
    int *ptr = &max;
    largest(arr,3,ptr);
    for(int i=0; i<3; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("The largest element in the array is: %d",max);
    return 0;
}