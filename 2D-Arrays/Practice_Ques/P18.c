// WAP to print the elements of 2D array in SPIRAL order.

#include <stdio.h>

int main(){
    int m,n;
    printf("Enter the rows: ");
    scanf("%d",&m);
    printf("Enter the columns: ");
    scanf("%d",&n);
    int a[m][n];
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    // Spiral Print
    printf("\n");
    int minr = 0;
    int maxr = m-1;
    int minc = 0;
    int maxc = n-1;
    int total_elements = m*n;
    int count = 0;
    while (count < total_elements){
        // print the minimum row
        for(int j = minc; j<=maxc && count < total_elements; j++){
            printf("%d ",a[minr][j]);
            count++;
        }
        minr++;
        // print the maximum column
        for (int i = minr; i<=maxr && count < total_elements; i++){
            printf("%d ",a[i][maxc]);
            count++;
        }
        maxc--;
        // print the maximum row
        for (int j=maxc; j>=minc && count < total_elements; j--){
            printf("%d ",a[maxr][j]);
            count++;
        }
        maxr--;
        // print the minimum column
        for (int i=maxr; i>=minr && count < total_elements; i--){
            printf("%d ",a[i][minc]);
            count++;
        }
        minc++;
    }
    return 0;
}

// Before bug fix
// Enter the rows: 3
// Enter the columns: 4
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12

// 1 2 3 4 8 12 11 10 9 5 6 7 "6" this extra 6 getting printed as the count condition has been met, but loop has to complete all instructions until end, so to fix this add a condition in every inner loop to always check count or a break statement could also had been added after every inner loop with count condition.

// After Bug Fix
// Enter the rows: 3
// Enter the columns: 4
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12

// 1 2 3 4 8 12 11 10 9 5 6 7