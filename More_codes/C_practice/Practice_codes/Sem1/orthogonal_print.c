#include<stdio.h>
#include<string.h>
#define MAX 100

//declaring functions.

void ninety();
void one_eighty();
void two_seventy();
void normal();
void repeated();
int main();
void choice();
void assigner();

// Global variables.

	char shabd[MAX];
	int length = 0;
	int temp=0;

// 90 degree printing function.

void ninety(){
	temp = length-1;
	while(temp>=0){
		printf("%c\n",shabd[temp]);
		temp--;
	}
	repeated();
}

// 180 degree printing function.

void one_eighty(){
	temp = length-1;
	while(temp>=0){
		printf("%c",shabd[temp]);
		temp--;
	}
	printf("\n");
	repeated();
}

// 270 degree printing function.

void two_seventy(){
	temp = 0;
	while(temp<length){
		printf("%c\n",shabd[temp]);
		temp++;
	}
	repeated();
}

// Normal or 360 degree printing function.

void normal(){
	printf("%s\n",shabd);
	repeated();
}

// Function which redirects control to other functions.

void assigner(int option){
	switch(option){
		case 1:
			ninety();
			break;
		case 2:
			one_eighty();
			break;
		case 3:
			two_seventy();
			break;
		case 4:
			normal();
			break;
	}
}

// Function which asks whether to repeat the process.

void repeated(){
	printf("\nDo you want to redo ?\n1) Yes \n 2)No \n  -->");
	int decision1=0;
	scanf("%d",&decision1);
	switch(decision1){
		case 1:
			printf("\nDo you want to use the previous word or change it ?\n1) Same\n2) Change\n  -->");
			int decision2=0;
			scanf("%d",&decision2);
			switch(decision2){
				case 1:
					choice();
					break;
				case 2:
					main();
					break;
				default:
					printf("Error\n");
			}
			break;
		case 2:
			printf("\nThank you!\n");
			break;
		default:
			printf("\nError\n");
	}
}

//Function which takes the choice code.

void choice(){
	int choice=0;
	printf("\nSelect a print option:\n 1) 90 degrees,\n 2) 180 degrees,\n 3) 270 degrees, or\n4) 0 or 360 degrees.\n  --->");
	scanf("%d",&choice);
	assigner(choice);
}

int main(){
	printf("\nEnter a word: ");
	scanf("%s",shabd);
	length=strlen(shabd);
	choice();
	return 0;
}