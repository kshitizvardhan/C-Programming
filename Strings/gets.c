#include <stdio.h>
#include <string.h>

int main(){
    char str[40];
    // scanf("%s",&str);
    // printf("Your input was: %s",str);
    // Kshitiz
    // Your input was: Kshitiz
    
    // Kshitiz Vardhan
    // Your input was: Kshitiz

    // So, through simply scanf only the first word is considered, after space the scanf stops taking input

    // So to fix this we can use gets(str);
    // gets(str);
    // printf("Your input was: %s",str);

    // In vs code its not working so.. else it works

    // another method which has scanf is little complicated to remember 
    scanf("%[^\n]",&str);
    printf("Your input was: %s",str);

    // Kshitiz Vardhan
    // Your input was: Kshitiz Vardhan
    
    return 0;
}