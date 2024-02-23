// WAP to print the sum of digits of a given number.

#include <stdio.h>

int main(){
    int n,sum=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    int save = n;
    while (n>0){
        int number;
        number = n%10;
        sum += number;
        n = n/10;
    }
    printf("The sum of digits of the %d number is: %d",save,sum);
    return 0;
}


// Enter a Number: 12345
// The sum of digits of the 12345 number is: 15

// Enter a Number: 4587
// The sum of digits of the 4587 number is: 24

// Enter a Number: 9191
// The sum of digits of the 9191 number is: 20