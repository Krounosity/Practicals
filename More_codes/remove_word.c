//Declaring preprocessor directives
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 600

//Declaring file pointers
FILE *FILE_ptr;
FILE *FINAL_ptr;

int main(){

    //Declaring strings to hold file name and the word to be deleted.
    char fileName[MAX], temp_filename[MAX], deletion[MAX];

    //Getting file name from user.
    printf("Enter file name: ");
    scanf("%s",fileName);

    //Getting the word to delete from user.
    printf("Enter the word to be deleted : ");
    scanf("%s",deletion);
    
    //Naming the temporary file.
    strcpy(temp_filename, "temp___"); //Prefixing the temporary file name to "temp___".
    strcat(temp_filename, fileName); //Concatenating the two strings

    //Opening files.
    FILE_ptr = fopen(fileName,"r");
    FINAL_ptr = fopen(temp_filename,"w");

    //Handling file opening errors.
    if(FILE_ptr == NULL || FINAL_ptr == NULL){
        printf("Error opening file(s).\n");
        return 1;
    }

    //Declaring character variable temporarily storing characters from initial files.
    char s[MAX];

    //While loop to get word from initial file.
    while(fgets(s,sizeof(s),FILE_ptr)!=NULL){
        if(strstr(s,deletion)==NULL){
            fputs(s,FINAL_ptr);
        } else{
            continue;
        }
    }

    //Closing files.
    fclose(FILE_ptr);
    fclose(FINAL_ptr);

    //Removing initial file.
    remove(fileName);
    
    //Renaming temporary file as the initial file.
    rename(temp_filename, fileName);
    
    return 0;
}