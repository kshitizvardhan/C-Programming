// WAP to add two matrices without using third matrix

#include <stdio.h>

int main(){
    int r,c;
    printf("Enter the rows: ");
    scanf("%d",&r);
    printf("Enter the columns: ");
    scanf("%d",&c);
    int arr[r][c];
    int brr[r][c];
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            scanf("%d",&brr[i][j]);
        }
    }
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            brr[i][j]+=arr[i][j];
        }
    }
    printf("\n");
    

    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}