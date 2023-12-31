#include<stdio.h>
#include<string.h>
#define MAX 102
int main(){
    char str1[MAX];
    printf("Enter a string: ");
    fgets(str1, MAX, stdin);
    fflush(stdin);
    int length = strlen(str1);
    str1[length+1] = '\0';
    length++;

    for(int i=0;i<length;i++){
        if(str1[i]>=65 && str1[i]<=90){
            str1[i] += 32;
        } else if(str1[i]>=97 && str1[1] <= 122){
            str1[i] -= 32;
        }
    }
    fputs(str1,stdout);

    return 0;
}