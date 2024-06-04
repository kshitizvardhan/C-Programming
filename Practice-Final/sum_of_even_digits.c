#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    while(n>0){
        int number;
        number = n%10;
        if(number%2==0){
            sum+=number;
        }
        n = n/10;
    }
    printf("Sum of even digits: %d",sum);
    return 0;
}