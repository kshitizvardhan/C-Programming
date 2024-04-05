#include <stdio.h>

void double1(int arr[][2], int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            arr[i][j] = 2 * arr[i][j];
        }
    }
}

int main(){
    int arr[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    double1(arr, 3, 2);
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
