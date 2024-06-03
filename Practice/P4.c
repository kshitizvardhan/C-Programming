#include <stdio.h>

int sumDigits(int n){
    int sum = 0;
    for(int i=0; n>0; i++){
        int temp = n%10;
        sum += temp;
        n = n/10;
    }
    return sum;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int sumOfDigits = sumDigits(n);
    printf("The sum of digits in %d are %d",n,sumOfDigits);
    return 0;
}