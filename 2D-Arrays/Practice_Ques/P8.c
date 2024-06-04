#include <stdio.h>
#include <limits.h>

int main(){
    int r,c;
    scanf("%d %d", &r,&c);
    int arr[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max_sum=INT_MIN, index;
    for(int i=0; i<r; i++){
        int sum=0;  // Reset Sum for Each Row !!
        for(int j=0; j<c; j++){
            sum += arr[i][j];
        }
        if(max_sum<sum){
            max_sum = sum;
            index = i;
        }
    }

    // for(int i=0; i<r; i++){
    //     for(int j=0; j<c; j++){
    //         printf("%d",arr[i][j]);
    //     }
    //     printf("\n");
    // }

    printf("The row with maximum sum is: %d, and sum is %d", index, max_sum);

    return 0;
}