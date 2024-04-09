// WAP to print 1 to n
#include <stdio.h>

void print1toN(int n){
    if(n==0){
        return;
    }else {
        print1toN(n-1);
        printf("%d ",n);
    }
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    print1toN(n);
}