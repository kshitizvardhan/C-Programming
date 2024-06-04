#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int check = n;
    int reversed = 0;
    while(n>0){
        reversed = reversed*10;
        int number;
        number = n%10;
        reversed += number;
        n = n/10;
    }
    if(check == reversed){
        printf("YES ITS A PALINDROME");
    } else {
        printf("NOT A PALINDROME");
    }

    return 0;
}