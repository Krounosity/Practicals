#include<stdio.h>
#include<string.h>
#define MAX 2000

int main(){
    char string[MAX];
    printf("Enter a string: ");
    fgets(string, 2000, stdin);
    int i = 0, vowels = 0, consonants = 0;

    while(string[i] != '\0'){
        if((string[i] >= 'A' && string[i] <= 'Z') || (string[i] >= 'a' && string[i] <= 'z')){
            if(string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U' ||
               string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u'){
                vowels++;
            }
            else{
                consonants++;
            }
        }
        ++i;
    }

    printf("Your entered string has %d vowels and %d consonants.\n", vowels, consonants);
    return 0;
}
