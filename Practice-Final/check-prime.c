#include <stdio.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d",&n);
    bool flag = true;
    for(int i=2; i<n; i++){
        if(n%i==0){
            flag = false;
            break;
        }
    }

    if(flag==true){
        printf("YES, PRIME NUMBER");
    }else{
        printf("NOT A PRIME NUMBER");
    }
    
    return 0;
}