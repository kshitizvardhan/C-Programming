// WAP to print wave-1

#include <stdio.h>

int main(){
    int m,n;
    printf("Enter the rows of 1st matrix: ");
    scanf("%d",&m);
    printf("Enter the columns of 1st matrix: ");
    scanf("%d",&n);
    int a[m][n];
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    // Input done
    printf("\n");
    for (int i=0; i<m; i++){
        if (i%2==0){ // even rows print normal
            for (int j=0; j<n; j++){
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        else { // odd rows print in reverse order
            for (int j = n-1; j>=0; j--){
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}