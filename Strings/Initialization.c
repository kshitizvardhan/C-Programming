#include <stdio.h>

int main(){
    char arr[] = {'a','t','l','a','s','\0'};
    printf("%c",arr[4]);         // Putting 5 here does not prints anything as last index holds the null character which is not printed
    printf("\n");
    // Shortcut Initialization
    char name[] = "Kshitiz";
    printf("%c",name[2]);
    return 0;
}