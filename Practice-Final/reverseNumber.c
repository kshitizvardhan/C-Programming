#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int reversed = 0;
    while(n>0){
        int number;
        reversed = reversed*10;
        number = n%10;
        reversed+=number;
        n=n/10;
    }
    printf("The reversed number is: %d",reversed);
    return 0;
}