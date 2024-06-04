#include <stdio.h>
#include <stdbool.h>

void removeDupli(int arr[], int n){
    int newArr[n];
    int newIndex=0;
    for(int i=0; i<n; i++){
        bool isDuplicate = false;
        int check = arr[i];
        for(int j=0; j<newIndex; j++){
            if(newArr[j]==check){
                isDuplicate = true;
                break;
            }
        }
        if(!isDuplicate){
            newArr[newIndex++] = arr[i];
        }
    }

    for(int i=0; i<newIndex; i++){
        printf("%d ",newArr[i]);
    }
    return;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    removeDupli(arr, n);
    return 0;
}