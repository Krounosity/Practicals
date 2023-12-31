#include <stdio.h>

int hotel_cost(int days){
    return days*2000;
}
int flight_cost(int people){
    return 9000*2*people;
}
int main(){
    int din,log;
    printf("How many people are going? ");
    scanf("%d",&log);
    printf("How many days are you planning to stay in Mumbai? ");
    scanf("%d",&din);
    printf("Your total cost for the trip is %d",hotel_cost(din)+flight_cost(log));
    return 0;
}