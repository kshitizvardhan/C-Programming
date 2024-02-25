#include <stdio.h>

int main(){
    char arr[] = {'a','t','l','a','s','\0'}; // Putting arr[5] here, does not prints anything as last index holds the null character which is not printed
    int i = 0;
    while (arr[i]!='\0'){
        printf("%c",arr[i]);
        i++;
    }         
    printf("\n");
    // Shortcut Initialization
    char name[] = "Kshitiz";
    printf("%c",name[2]);
    return 0;
}