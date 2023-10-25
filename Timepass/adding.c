#include <stdio.h>

int main(){
    int input_num, adding=0, sum=0,terms;
    printf("Enter number: ");
    scanf("%d",&input_num);
    printf("Enter the number of terms wanted: ");
    scanf("%d",&terms);
    for(int i=0;i<terms;i++){
        adding = (adding*10)+input_num;
        sum=sum+adding;
    }
    printf("The sum is --> %d",sum);
    return 0;
}