// WAP to find factorial of a number using recursion

#include <stdio.h>

int factorial(int n){
    if(n==1){   // Base Case
        return 1;
    } else {
        return n * factorial(n-1);
    }
}


int main(){
    int n;
    printf("Enter a n: ");
    scanf("%d",&n);
    long long int result = factorial(n);
    printf("The factorial of %lld is:  %d",n,result);
    return 0;
}