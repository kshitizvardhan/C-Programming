#include <stdio.h>

int countDigits(int n){
    int count = 0;
    for(int i=0; n>0; i++){
        n = n/10;
        count++;
    }
    return count;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int numOfDigits = countDigits(n);
    printf("The number of digits in %d are %d",n,numOfDigits);
    return 0;
}