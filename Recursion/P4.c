// Wap to find the sum of the digits of a number using recursion

#include <stdio.h>

int sumOfDigits(int n) {
    if (n / 10 == 0) {
        return n;
    }
    else {
        return (n % 10) + sumOfDigits(n / 10);
    }
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Sum of digits of %d is %d\n", number, sumOfDigits(number));
    return 0;
}
