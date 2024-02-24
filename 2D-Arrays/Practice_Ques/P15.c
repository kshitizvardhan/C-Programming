// WAP to multiply two matrices

#include <stdio.h>

int main(){
    int r1,c1,r2,c2;
    printf("Enter the rows of 1st matrix: ");
    scanf("%d",&r1);
    printf("Enter the columns of 1st matrix: ");
    scanf("%d",&c1);
    printf("Enter the rows of 2nd matrix: ");
    scanf("%d",&r2);
    printf("Enter the columns of 2nd matrix: ");
    scanf("%d",&c2);
    int a[r1][c1];
    int b[r2][c2];
    int res[r1][c2];
    if (c1==r2){
        for (int i=0; i<r1; i++){
            for (int j=0; j<c1; j++){
                scanf("%d",&a[i][j]);
            }
        }
        printf("1st matrix stored\nEnter 2nd matrix\n");
        for (int i=0; i<r2; i++){
            for (int j=0; j<c2; j++){
                scanf("%d",&b[i][j]);
            }
        }
        printf("\n");
        int cr = c1;
        // multiplying
        for (int i=0; i<3; i++){
            for (int j=0; j<4; j++){
                res[i][j] = 0;
                for(int k=0; k<cr; k++){
                    res[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        for (int i=0; i<3; i++){
            for (int j=0; j<4; j++){
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Multiplication not possible !");
    }
    return 0;
}

// Enter the rows of 1st matrix: 3
// Enter the columns of 1st matrix: 2
// Enter the rows of 2nd matrix: 2
// Enter the columns of 2nd matrix: 4
// 1 2
// 3 4
// 5 6
// 1st matrix stored
// Enter 2nd matrix
// 1 2 3 4
// 5 6 7 8

// 11 14 17 20
// 23 30 37 44
// 35 46 57 68