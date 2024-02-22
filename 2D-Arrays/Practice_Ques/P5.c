#include <stdio.h>

int main(){
    int r,c,sum=0;
    printf("Enter the rows: ");
    scanf("%d",&r);
    printf("Enter the columns: ");
    scanf("%d",&c);
    int arr[r][c];
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            sum += arr[i][j];
        }
    }
    printf("The sum of the elements of 2D array is: %d",sum);
    return 0;
}