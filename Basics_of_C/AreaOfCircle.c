#include <stdio.h>

int main(){
    float radius = 0;
    printf("Enter radius: ");
    scanf("%f",&radius);
    float area = radius * radius * 3.14;
    printf("The area of circle is: %.2f",area);
    return 0;
}