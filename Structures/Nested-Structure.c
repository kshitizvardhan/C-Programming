#include <stdio.h>

// Nested Structures

int main(){
    struct Book{
        char name[20];
        float price;
        int pages;
    };

    struct specialBook{     // This will have all the properties of the Book Structure as well as its own new properties
        int special;
        struct Book b1;

    }; 

    struct specialBook SB;
    SB.b1.pages = 334;      // b1 is the link to get the properties of the normal book.

}