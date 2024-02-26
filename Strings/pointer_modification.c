#include <stdio.h>
#include <string.h>

int main(){
    char *ptr = "Hello";
    printf("Address 1: %p\n",ptr);
    ptr = "Bye";
    printf("Address 2: %p\n",ptr);
}