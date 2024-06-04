#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a = 1;
    int b = 1;
    int c;
    if(n==1){
        printf("%d",a);
    } else if(n==2){
        printf("%d ",a);
        printf("%d ",b);
    } else {
        printf("%d ",a);
        printf("%d ",b);
        for(int i=3; i<=n; i++){
            c = a+b;
            printf("%d ",c);
            a = b;
            b = c;
        }
    }
    return 0;
    
}