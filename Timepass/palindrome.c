#include<stdio.h>

int main(){
    int num;
    int temp_num;
    int num_pal=0;
    int length;
    int add_karo;
    printf("Enter the length of the number: ");
    scanf("%d",&length);
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Your number --> %d",num);
    temp_num=num;
    for(int i=0;i<length;i++){
        add_karo = temp_num%10;
        num_pal = (num_pal*10)+add_karo;
        temp_num=temp_num/10;
    }
    printf(" and its reverse --> %d\n",num_pal);
    if(num==num_pal){
        printf("Palindrome hai.\n");
    }
    else{
        printf("Palindrome nahi hai. \n");
    }
    return 0;
}