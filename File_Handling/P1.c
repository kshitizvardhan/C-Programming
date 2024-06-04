#include <stdio.h>

int main(){
    FILE *file_ptr;     // Initialze file pointer
    
    file_ptr = fopen("heart.txt", "w");    // w mode- also creates a file, if not present...(OPEN FILE)
    char letter[] = "Can i get a Place in your Heart ??\n";
    fputs(letter,file_ptr);         // this writes into her heart's file (WRITING A FILE)
    
    // Now close her heart to avoid others to write into it. (CLOSING A FILE)
    fclose(file_ptr);

    FILE *file_ptr_2 = fopen("heart.txt","r"); // OPEN again in READ MODE
    // Now to check whether written or not...(READ from file)
    char output[100];
    while(fgets(output,100,file_ptr_2)!=NULL){
        printf("%s",output);
    }
    fclose(file_ptr_2);

    return 0;
}


