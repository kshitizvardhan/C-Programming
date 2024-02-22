// WAP to return the sum of rectangle with given coordinates.
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
    int a,b,d,e;
    printf("Enter coordinates: ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&d);
    scanf("%d",&e);
    for (int i=a-1; i<d; i++){
        for (int j=b-1; j<e; j++){
            sum += arr[i][j];
        }
    }
    printf("The sum of the elements with given coordinate of 2D array is: %d",sum);
    return 0;
}