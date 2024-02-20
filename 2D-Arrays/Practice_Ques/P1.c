// WAP to store roll number and marks obtained by 4 students side by side in a matrix.

#include <stdio.h>

int main(){
    int r=4,c=2;
    int arr[r][c];
    for (int i=0; i<r; i++){
        printf("Enter Roll Number & marks: ");
        scanf("%d %d",&arr[i][0],&arr[i][1]);
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