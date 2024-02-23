// WAP to check whether the number is armstrong number or not

#include <stdio.h>

int main(){
    int n,check;
    printf("Enter a  Number: ");
    scanf("%d",&n);
    int save = n;
    for (int i=0; n>0; i++){
        int number;
        number = n%10;
        check += number*number*number;
        n = n/10;
    }
    if (check==save){
        printf("Yes %d is an armstrong number.",check);
    }else{
        printf("No, %d is not an armstrong number, as sum of cubes equal to %d",save,check);
    }
    return 0;
}