#include <stdio.h>

int eval(int arr[], int max){
    int count = 0;
    for(int i=0; i<10; i++){
        if(arr[i]>=max){
            count++;
        }
    }
    return count;
}


int main(){
    int marks[10], max_marks = 0;
    printf("Enter marks of students: ");
    for(int i=0; i<10; i++){
        scanf("%d",&marks[i]);
    }
    printf("Enter Max Marks of Previous year batch: ");
    scanf("%d",&max_marks);
    int result = eval(marks,max_marks);
    printf("Total number of students who scored more marks then previous year: %d",result);
    return 0;
}