#include <stdio.h>

void swapByReference(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a,b;
    printf("Enter a & b: ");
    scanf("%d %d",&a,&b);
    printf("a = %d, b = %d",a,b);

    swapByReference(&a,&b);

    printf("a = %d, b = %d",a,b);

    return 0;
}