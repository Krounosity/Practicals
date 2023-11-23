#include<stdio.h>
#include<string.h>
void sort();
void info_take();
struct students{
    int roll;
    char f_name[50];
    int one;
    int two;
    int three;
    int aggregate;
}student[5];

int length = 0;
void info_take(){
    for(int i=0;i<5;i++){
        student[i].aggregate = 0;
        printf("\n\nFor student %d:\n",i+1);
        printf("Roll number: ");
        scanf("%d",&student[i].roll);
        printf("First Name: ");
        scanf("%s",&student[i].f_name);
        printf("\nMarks in subject 1: ");
        scanf("%d",&student[i].one);
        student[i].aggregate+=student[i].one;
        printf("\nMarks in subject 2: ");
        scanf("%d",&student[i].two);
        student[i].aggregate+=student[i].two;
        printf("\nMarks in subject 3: ");
        scanf("%d",&student[i].three);
        student[i].aggregate+=student[i].three;
        length++;
    }
    sort();
}

void sort(){
    for(int i=1;i<length;i++){

    }
}

int main(){
    printf("Please enter the data for each student: \n");
    info_take();
    return 0;
}