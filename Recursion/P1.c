// WAP to find factorial of a number using recursion

#include <stdio.h>

int factorial(int n){
    int f;
    if(n==1){   // Base Case
        return 1;
    } else {
        f = n * factorial(n-1);
        return f;
    }
}


int main(){
    int n;
    printf("Enter a n: ");
    scanf("%d",&n);
    int result = factorial(n);
    printf("The factorial of %d is:  %d",n,result);
    return 0;
}