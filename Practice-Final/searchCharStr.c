#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    char ch, str[40];
    printf("Enter String: ");
    scanf("%[^\n]", &str);
    printf("Enter Char: ");
    scanf(" %c", &ch);
    bool isFound = false;
    int index;
    for(int i=0; str[i] != '\0'; i++){
        if(str[i]==ch){
            isFound = true;
            index = i;
            break;
        }
    }
    if(isFound){
        printf("Found on position %d", index);
    }else {
        printf("Not Found");
    }
}