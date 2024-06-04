#include <stdio.h>
#include <stdbool.h>

bool checkPrime(int n){
    bool flag = true;
    for(int i=2; i<n; i++){
        if(n%i==0){
            flag = false;
            break;
        }
    }
    return flag;
}

int main(){
    int n;
    scanf("%d",&n);
    int count = 0;
    int number=2;
    while(count<n){
        if(checkPrime(number)){
            printf("%d ",number);
            count++;
        }
        number++;
        
    }

    return 0;
}