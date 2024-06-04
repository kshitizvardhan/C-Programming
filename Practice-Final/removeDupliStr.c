#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void removeDuplicates(char str[]) {
    int newIndex = 0;
    char newStr[50]; // New string to hold unique characters
    
    for (int i = 0; str[i] != '\0'; i++) {
        bool isDuplicate = false;
        char check = str[i];
        // Check if the character is already in the new string
        for (int j = 0; j < newIndex; j++) {
            if (newStr[j] == check) {
                isDuplicate = true;
                break;
            }
        }
        // If the character is not a duplicate, add it to the new string
        if (!isDuplicate) {
            newStr[newIndex++] = check;
        }
    }
    newStr[newIndex] = '\0'; // Null-terminate to end the new string
    printf("String after removing duplicates: %s\n", newStr);
}

int main() {
    char str[50];
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    removeDuplicates(str);
    return 0;
}
