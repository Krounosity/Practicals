#include<stdio.h>
#include<string.h>
#include<conio.h>
int palindrome(char string[]){
    int len=strlen(string);
    int i=0,flag=0;
    int j=len-i-1;
    while(i!=j){
        if(string[i]!=string[j]){
            return 1;
            flag++;
            break;
        }
        else{
            i++;
            j--;
        }
    }
    if(flag==0){
        return 0;
    }
}
int main(){
    char str_in[100];
    printf("Enter a word: ");
    scanf("%s",&str_in);
    int result = palindrome(str_in);
    if(result==0){
        printf("The word is a palindrome.\n");
    }
    else if(result==1){
        printf("The word is not a palindrome.\n");
    }
    else{
        printf("Error occured.\n");
    }
    return 0;
}