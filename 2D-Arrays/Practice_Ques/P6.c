// WAP to find the maximum and minimum element in the 2d-array also tell the index of the maximum element.

#include <stdio.h>
#include <limits.h>

int main(){
    int r,index1,index2,c,max= INT_MIN;
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
            if (arr[i][j]>max){
                index1 = i;
                index2 = j;
                max = arr[i][j];
            }
        }
    }
    printf("The maximum element in the 2d-array is %d and index (%d,%d)",max,index1,index2);
    int min = INT_MAX;

    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            if (arr[i][j]<min){
                index1 = i;
                index2 = j;
                min = arr[i][j];
            }
        }
    }
    printf("\nThe minimum element in the 2d-array is %d and index (%d,%d)",min,index1,index2);
    return 0;
}