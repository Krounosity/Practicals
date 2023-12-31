#include<stdio.h>
#include<string.h>
#define MAX 2000

int main(){
    char string[MAX];
    printf("Enter a string: ");
    fgets(string, 2000, stdin);
    int i = 0;
    int freq[256];
    //finding the frequency of all the characters.
    while(string[i]!='\0'){
        int position = (int)string[i];
        freq[position] +=1;
        i++;
    }
    //finding the maximum frequency in the 'freq' array.
    int max=0;
    for(int i=0;i<256;i++){
        if(max<freq[i]){
            max=freq[i];
        }
    }
    printf("The character with the maximum occurence in your given string is %c.\n",max);
    return 0;
}
