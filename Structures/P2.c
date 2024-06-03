#include <stdio.h>
#include <strings.h>


int main(){
    typedef struct book{
        char name[20];
        float price;
        int pages;
    } Book;

    // struct book b1;
    Book b1;
    // struct book b2;
    Book b2;

    // So with the help of typedef, we shortened the name

    printf("Enter Name of Book 1: ");
    scanf("%[^\n]",&b1.name);

    printf("Enter Price: ");
    scanf("%f", &b1.price);

    printf("Enter Pages: ");
    scanf("%d", &b1.pages);

    printf("%s\n",b1.name);
    printf("%.2f\n",b1.price);
    printf("%d\n",b1.pages);

    // printf("Enter Name of Book 2: ");
    // scanf("%[^\n]",&b2.name);
    // Another Method here for taking string input....
    strcpy(b2.name, "Secret Seven");

    printf("Enter Price: ");
    scanf("%f", &b2.price);

    printf("Enter Pages: ");
    scanf("%d", &b2.pages);

    printf("%s\n",b2.name);
    printf("%.2f\n",b2.price);
    printf("%d\n",b2.pages);
    
    return 0;
}