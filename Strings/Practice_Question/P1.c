// WAP to reverse the string 

#include <stdio.h>
#include <string.h>

int main(){
    char str[40];
    scanf("%[^\n]s",&str);
    int size=0,k=0;
    while (str[k]!='\0'){
        size++; 
        k++;
    }
    int j=size-1;
    for(int i=0; i<=j; i++, j--){
        char temp = str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf("The reverse is: %s",str);
    return 0;
}