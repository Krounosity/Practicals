#include<stdio.h>
#include<math.h>
int binary_num[30];
int number;
int i=0;
int print(){
    for(int j=i-1;j>=0;j--){
        printf("%d",binary_num[j]);
    }
    printf("\n");
    return 0;
}
void binary(int num){
    if(num!=0){
        if(num%2==0){
            binary_num[i]=0;
            i++;
        }
        else if(num%2==1){
            binary_num[i]=1;
            i++;
        }
        num/=2;
        binary(num);
    }
    else{
        printf("The binary of %d is: ",number);
        print();
    }
}   
int main(){
    printf("Enter a number: ");
    scanf("%d",&number);
    binary(number);
    return 0;
}