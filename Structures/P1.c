#include <stdio.h>

int main(){
    // This is like a schema for all the users that shall be created...
    // More of like a BLUEPRINT
    struct User{
        char gender;
        int Hot_Level;
        int age;
    };

    struct User Aalishna;   // This is the User
    // This is its Properties
    printf("Enter the gender of User: "); 
    scanf(" %c", &Aalishna.gender);
    printf("Enter the hotness level of User on rate of 10: ");
    scanf("%d",&Aalishna.Hot_Level);
    printf("Enter the age of User: ");
    scanf("%d", &Aalishna.age);

    struct User Kshitiz;
    printf("Enter the gender of User: "); 
    scanf(" %c", &Kshitiz.gender);
    printf("Enter the hotness level of User on rate of 10: ");
    scanf("%d",&Kshitiz.Hot_Level);
    printf("Enter the age of User: ");
    scanf("%d", &Kshitiz.age);

    printf("User 1 Gender: %c\n", Aalishna.gender);
    printf("User 1 Hotness-Level: %d\n", Aalishna.Hot_Level);
    printf("User 1 Age: %d\n\n", Aalishna.age);

    printf("User 2 Gender: %c\n", Kshitiz.gender);
    printf("User 2 Hotness-Level: %d\n", Kshitiz.Hot_Level);
    printf("User 2 Age: %d\n", Kshitiz.age);

    return 0;
    
}