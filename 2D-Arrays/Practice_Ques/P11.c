// WAP to print the transpose of the matrix entred by the user.
#include <stdio.h>

int main(){
    int n;
    printf("Enter the rows/columns: ");
    scanf("%d",&n);
    int arr[n][n];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // for (int i=0; i<n; i++){
    //     for (int j=0; j<n; j++){
    //         int temp = arr[i][j];
    //         arr[i][j] = arr[j][i];
    //         arr[j][i] = temp;
    //     }
    // }
    printf("\n");
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}