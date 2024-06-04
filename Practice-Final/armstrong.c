#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int check = n;
    int cube_sum=0;
    while(n>0){
        int number;
        number = n%10;
        cube_sum += number*number*number;
        n = n/10;
    }

    if(check == cube_sum){
        printf("YES, ITS ARMSTRONG NUMBER");
    } else {
        printf("NOT A ARMSTRONG NUMBER");
    }
    return 0;
}