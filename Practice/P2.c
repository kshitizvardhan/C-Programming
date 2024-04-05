#include <stdio.h>
#include <limits.h>

int sum(int arr1[], int arr2[]){
    
}

int main(){
    int arr1[5], arr2[5];
    printf("Enter elements of 1st Array: ");
    for(int i=0; i<5; i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter elements of 2nd Array: ");
    for(int i=0; i<5; i++){
        scanf("%d",&arr2[i]);
    }
    int result = sum(arr1,arr2);
    
}