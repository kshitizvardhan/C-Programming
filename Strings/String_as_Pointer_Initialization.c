#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Kshitiz Vardhan";
    char *ptr = str;        // ptr points to str[0]
    int i = 0;
    while (*ptr!='\0'){
        printf("%c",*ptr);      // *ptr fetches the value at that address
        ptr++;                  // ptr stands for the address of that value. So for nect character to be fetched address is incremented
        i++;
    }
    return 0;
}