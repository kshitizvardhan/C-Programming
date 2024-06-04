#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

int main(){
    int a = 4;
    int b = 25;
    printf("a = %d\n",a);
    printf("b = %d\n\n",b);
    swap(&a,&b);
    printf("a = %d\n",a);
    printf("b = %d\n",b);
}