#include<stdio.h>
#include<stdlib.h>
FILE *EMP_ptr;

int lines=0;
int characters=0;
int blanks=0;


int main(){
    EMP_ptr = fopen("EMP_FL.txt","r");
    char c;
    for(c=getc(EMP_ptr); c!=EOF;c=getc(EMP_ptr)){
        if(c==32){
            blanks++;
        }
        else if(c=='\n'){
            lines++;
        }
        else{
            characters++;
        }
    }
    if(characters!=0){lines++;}
    printf("The file name is EMP_FL\n1) Number of lines in the file: %d\n2) Number of characters in the file: %d\n3) Number of blanks in the document: %d",lines,characters,blanks);
    return 0;
}