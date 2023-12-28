//Declaring preprocessor directives
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 600

//Declaring file pointers
FILE *FILE_ptr;
FILE *FINAL_ptr;

int main(){

    //Declaring strings to hold file name;
    char fileName[MAX], temp_filename[MAX];
    
    //Declaring variable to hold the index of the line to be deleted and variable which
    //counts the current line.
    int index = 0, line_now = 1;

    //Getting file name from user.
    printf("Enter file name: ");
    scanf("%s",fileName);

    //Getting the index of the line to delete from user.
    printf("Enter the line to be deleted (the first line being \"1\"): ");
    scanf("%d",&index);
    
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
    char c;

    //For loop to get character from initial file.
    for(c=getc(FILE_ptr); c!=EOF;c=getc(FILE_ptr)){
        //Puts the character in other file only if current line is not the one to be deleted.
        if(line_now != index)
        {
            fputc(c,FINAL_ptr); //Puts character in other file.
        }

        //Increases value of current line counting variable when the character variable is a new line character.
        if(c=='\n'){
            line_now++;
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