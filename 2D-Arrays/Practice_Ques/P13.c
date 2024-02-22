// WAP to rotate the matrix 90degree clockwise

#include <stdio.h>

int main(){
    int n;
    printf("Enter the rows/columns: ");
    scanf("%d",&n);
    int arr[n][n];
    // input
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // transpose
    for (int i=0; i<n; i++){
        for (int j=i; j<n; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    // reverse
    for (int i=0; i<n; i++){
        int j=0, k=n-1; // k for last element of array
        while (j<k){
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
            j++;
            k--;
            
        }
    }
    // output
    printf("\n");
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}