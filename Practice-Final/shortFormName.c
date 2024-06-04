#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter the String: ");
    scanf("%[^\n]", str);
    int count=0;
    // First see How many words are there
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            count++;       // getting the size for whitesapces array
        }
    }
    int whiteSpacesPosn[count];
    int index=0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            whiteSpacesPosn[index++] = i;       // Storing positions where there are spaces
        }
    }
    // Now for the last element in whiteSpacesPosn array will print whole word
    printf("%c.",str[0]);
    for(int i=0; i< count-1; i++){
        printf("%c.",str[whiteSpacesPosn[i]+1]);
    }

    for(int i=whiteSpacesPosn[count-1]+1; str[i] !='\0'; i++){
        printf("%c",str[i]);
    }

    return 0;
    }
