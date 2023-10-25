#include<stdio.h>

int main(){
    int var1=8;
    int var2=2;
    var1=var1+var2; //a=a+b
    var2=var1-var2; //b=a-b
    var1=var1-var2; //a=a-b
    printf("%d %d",var1,var2);
    return 0;
}