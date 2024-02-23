// WAP to count the digits of a given number.

#include <stdio.h>

int main(){
    int n, count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    int save = n;
    while (n>0){
        n = n/10;
        count++;
    }
    printf("There are total %d digits in the %d number.",count,save);
    return 0;
}

   
// Enter a number: 8754
// There are total 4 digits in the 8754 number.

// Enter a number: 19325
// There are total 5 digits in the 19325 number.

// Enter a number: 254
// There are total 3 digits in the 254 number.

// Enter a number: 5
// There are total 1 digits in the 5 number.