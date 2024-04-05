#include <stdio.h>

void double1(int arr[], int n){
    for(int i=0; i<n; i++){
        arr[i] = 2*arr[i];
    }
}

int main(){
    int arr[3] = {1,2,3};
    double1(arr,3);
    for(int i=0; i<3; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}