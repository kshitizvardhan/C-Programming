#include <stdio.h>
#include <limits.h>

int main(){
    int arr[3][4]={{1,0,1,1},{0,1,0,1},{1,0,0,1}};
    int count, max_count=INT_MIN;
    int index;
    for (int i=0; i<3; i++){
        count = 0;
        for (int j=0; j<4; j++){
            if (arr[i][j]==1){
                count+=1;
            }
            if (count > max_count){
                max_count = count;
                index = i;
            }
        }
    }
    printf("Maximum number of 1's is %d and its (row)index is %d",max_count,index);
    return 0;
}