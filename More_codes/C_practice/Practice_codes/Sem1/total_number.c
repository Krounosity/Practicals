#include<stdio.h>
#include<string.h>
#define MAX 2000
int main(){
    printf("Enter a string: ");
    char string[MAX];
    fgets(string,MAX,stdin);
    int length = strlen(string)-1;
    printf("The given string is %d characters long.\n",length);
    return 0;
}