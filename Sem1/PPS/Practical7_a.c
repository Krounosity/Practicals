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
};

void info_take(){
    struct students student[5];
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
    }
    sort(student,5);
    for(int l=4;l>=0;l--){
        printf("Rank %d: %s, Aggregate marks: %d\n",l+1,student[l].f_name,student[l].aggregate);
    }
}

void sort(struct students student[],int times){
    for(int i=0;i<times-1;i++){
        int smallest = i;
        for(int j=i+1;j<times;j++){
            if(student[smallest].aggregate>student[j].aggregate){
                smallest = j;
            }
        }
        if(student[i].aggregate>student[smallest].aggregate){
            struct students temp = student[i];
            student[i] = student[smallest];
            student[smallest] = temp;
        }
    }
}

int main(){
    printf("Please enter the data for each student: \n");
    info_take();
    return 0;
}