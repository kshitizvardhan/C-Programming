// WAP to print the sum of all the even digits of a given number

#include <stdio.h>

int main(){
    int n,sum=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    int save = n;
    while (n>0){
        int number;
        number = n%10;
        if (number%2==0){
            sum += number;
        }
        n = n/10;
    }
    printf("The sum of even digits of the %d number is: %d",save,sum);
    return 0;
}


// Enter a Number: 246
// The sum of even digits of the 246 number is: 12

// Enter a Number: 13452
// The sum of even digits of the 13452 number is: 6

// Enter a Number: 3334
// The sum of even digits of the 3334 number is: 4

// Enter a Number: 1522
// The sum of even digits of the 1522 number is: 4