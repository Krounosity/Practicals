#include<stdio.h>
#include<stdlib.h>
#define MAX 600

FILE *EMP_ptr;
FILE *FINAL_ptr;
int main(){
    EMP_ptr = fopen("EMP_FL.txt","r");
    FINAL_ptr = fopen("FINAL.txt","w");
    char c;
    for(c=fgets(c,80,EMP_ptr); c!=EOF;c=fgets(c,80,EMP_ptr)){
        fputs(c,FINAL_ptr);
    }
    fclose(EMP_ptr);
    fclose(FINAL_ptr);
    return 0;
}