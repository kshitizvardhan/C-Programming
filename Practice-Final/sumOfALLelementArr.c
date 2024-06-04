#include <stdio.h>

int sumOfAllElements(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    return sum;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int sumOfAllEle = sumOfAllElements(arr,n);
    printf("Sum of all the elements in the Array: %d",sumOfAllEle);

    return 0;
}