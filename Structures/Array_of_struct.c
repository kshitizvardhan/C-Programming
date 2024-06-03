#include <stdio.h>

int main(){
    typedef struct Cricketer{
        char name[20];
        int age;
        int numberOfMatches;
        float avgRuns;
    } Cricketer;

    // Array of Structure storing data of 20 cricketers
    Cricketer arr[20];
    for(int i=0; i<20; i++){
        scanf(" %[^\n]",&arr[i].name);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].numberOfMatches);
        scanf("%f",&arr[i].avgRuns);
        printf("Recorded Successfully !!\n");
    }

    // Print the Records
    for(int i=0; i<2; i++){
        printf("\n");
        printf("Cricketer's Name: %s\n",arr[i].name);
        printf("Age: %d\n",arr[i].age);
        printf("Number of Matches Played: %d\n",arr[i].numberOfMatches);
        printf("Average Runs: %.2f\n\n",arr[i].avgRuns);
    }

    return 0;
}