#include <stdio.h>
#include <string.h>

int main(){
    char s1[] = "Kshitiz Vardhan";
    char *s2 = s1;

    // Change in s1
    s1[0]='M';
    printf("%s",s2);        // Also gets change in s2, which is nothing but pointer pointing to s1[0], that is why its not a copy as no new string s2 is created, and hence is called as shallow copy
    return 0;
}