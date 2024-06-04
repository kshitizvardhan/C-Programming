#include <stdio.h>

int factorial(int n){
    if (n==0) return 1;
    if(n==1){
        return n;
    }else{
        return n*factorial(n-1);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int ans = factorial(n);

    printf("%d",ans);
}