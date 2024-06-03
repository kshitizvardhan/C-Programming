#include <stdio.h>
#include <string.h>

int main(){
    char str[30];
    gets(str);
    printf("%s",strlwr(str));
    return 0;
}