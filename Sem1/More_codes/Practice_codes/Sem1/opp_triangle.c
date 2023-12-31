#include<stdio.h>

int main(){
    int lines = 0;
    printf("Enter the number of lines: ");
    scanf("%d",&lines);
    
    for(int i=1; i<=lines;i++){
        if(i==lines){
            //printing the final line.
            for(int final = 1; final <=lines; final ++){
                printf("%d",final);
            }
            for(int right_final = lines-1; right_final>=1; right_final--){
                printf("%d",right_final);
            }
        
        } else {

            //Printing the left triangle.
            for(int left = 1; left<= i; left++){
                printf("%d",left);
            }

            //Adding spaces.
            for(int spaces = 2*(lines-i)-1; spaces >= 1; spaces--){
                printf(" ");
            }

            //Printing the right triangle.
            for(int right = i; right >=1; right --){
                printf("%d",right);
            }
        }
        printf("\n");
    }

    return 0;
}