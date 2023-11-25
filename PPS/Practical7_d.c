#include<string.h>
#include<stdio.h>
#define MAX 102

void str_copy(char*, char*);

int main(){
	char string[MAX],string_out[MAX];
	printf("Enter a string: ");
	fgets(string, MAX, stdin);
	str_copy(string,string_out);
	printf("The entered string is: %s \n",string_out);
	return 0;
}

void str_copy(char *str_in, char *str_out){
	while(*str_in){
		*str_out = *str_in;
		str_in++;
		str_out++;
	}
	*str_out='\0';
}
