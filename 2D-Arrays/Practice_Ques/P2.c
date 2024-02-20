// WAP to store 10 at every index of a 2D matrix with 5 rows and 5 columns.

#include <stdio.h>

int main(){
    int r=5,c=5;
    int arr[r][c];
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            arr[i][j]=10;
        }
    }
    printf("\n");
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}