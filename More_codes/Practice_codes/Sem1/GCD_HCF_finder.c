#include <stdio.h>

int gcf(int num1, int num2){
    if(num1!=num2){
        if(num1>num2){
            num1 -= num2;
            gcf(num1,num2);
        }
        else {
            num2-=num1;
            gcf(num1,num2);
        }
    } else {
        return num1;
    }
}
int main()
{
    int n1,n2;
    printf("Enter two number separated by a space: ");
    scanf("%d %d",&n1,&n2);
    int result = gcf(n1,n2);
    printf("The HCF/GCD of the two given numbers is: %d.\n",result);
    return 0;
}