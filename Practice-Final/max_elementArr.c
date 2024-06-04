#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    qsort(arr,n,sizeof(int),compare);
    

    printf("Maximum Element in the Array: %d\n", arr[n-1]);
    printf("Second Maximum Element in the Array: %d\n", arr[n-2]);
    printf("Third Maximum Element in the Array: %d\n", arr[n-3]);

    return 0;
    
}