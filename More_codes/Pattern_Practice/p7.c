    #include<stdio.h>

    int main(){
        int rows;
        printf("Enter the *ODD* number of rows you want\n--> ");
        scanf("%d",&rows);

        //pattern printing starts
        for(int i=1;i<=rows;i++){
            // upper triangle
            if(i<=(rows/2)+1){
                //spaces
                for(int s1=1;s1<=(rows+1)-(2*i);s1++){
                    printf(" ");
                }
                //asterisks
                printf("* ");
                if(i!=1){
                    //in between spaces
                    for(int s2=2; s2<=(3+(4*(i-2)));s2++){
                        printf(" ");
                    }
                    // row end asterisk
                    printf("*");
                }
                printf("\n");
            }
            else{
                //spaces
                for(int s1=1;s1<=2*(i-((rows/2)+1));s1++){
                    printf(" ");
                }
                //row start asterisk
                printf("* ");
                if(i<rows){
                //row end asterisk
                    printf("*");
                }
                printf("\n");
            }
        }
        
        return 0;
    }