// WAP to print the sum of 1 to n numbers

#include <stdio.h>

int sum1toN(int n){
    if (n==0){
        return 0;
    } else {
        return n + sum1toN(n-1);
    }
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int result = sum1toN(n);
    printf("The sum of 1 to %d is:  %d",n,result);
    return 0;
}