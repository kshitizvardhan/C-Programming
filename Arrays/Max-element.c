#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int maxEle(int arr[], int size){
    int max = INT_MIN;
    // int second_max = max;
    // int third_max = second_max;
    for(int i=0; i<size; i++){
        if(max < arr[i]){
            // third_max = second_max;
            // second_max = max;
            max = arr[i];
        }
    }
    // printf("second max: %d",second_max);
    // printf("third max: %d",third_max);
    return max;
}

int main(){
    int size, maxElement;
    printf("Enter size of arr: ");
    scanf("%d",&size);

    int arr[size];
    // input array
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    qsort(arr, size, sizeof(int), compare);
    // print array
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    maxElement = maxEle(arr, size);
    printf("The maximum element in the array: %d",maxElement);
    return 0;
}