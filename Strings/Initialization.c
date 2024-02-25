#include <stdio.h>

int main(){
    char str[] = {'a','t','l','a','s','\0'}; // Putting arr[5] here, does not prints anything as last index holds the null character which is not printed
    int i = 0;
    while (str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }         
    printf("\n");
    // Shortcut Initialization
    char name[] = "Kshitiz";            // Here no need to mention null character, its automatically added, but in above initialization, you need to add manually.
    i = 0;
    while (name[i]!='\0'){
        printf("%c",name[i]);
        i++;
    }   
    return 0;
}