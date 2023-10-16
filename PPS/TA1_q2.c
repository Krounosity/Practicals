#include <stdio.h>
#define MAX 100000

int main()
{
    int option, nat_num, count = 0, i, j, k, l, n, dimension[2],check, flag=0;
    float sides[3];
    int factors[MAX], matrix1[100][100], matrix2[100][100];
    printf("Welcome! Please enter the desired option:\n1)Triangle Type Finder.\n2)Factor Finder.\n3)Identical Matrix Checker.\n");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        printf("Welcome to the Triangle Type Finder.");
        for (k = 0; k < 3; k++)
        {
            printf("Please enter side %d: ", k + 1);
            scanf("%f", &sides[k]);
        }
        if (sides[0] == sides[1] && sides[1] == sides[2])
        {
            printf("The triangle is an equilateral triangle.");
        }
        else if (sides[0] == sides[1] || sides[1] == sides[2] || sides[0] == sides[2])
        {
            printf("The triangle is an isosceles triangle.");
        }
        else
        {
            printf("The triangle is a scalene triangle");
        }
        break;
    case 2:
        printf("Welcome to the Factor Finder. Please enter a natural number: ");
        scanf("%d", &nat_num);
        for (l = 1; l <= nat_num; l++)
        {
            if (nat_num % l == 0)
            {
                factors[count] = l;
                count++;
            }
            else
            {
                continue;
            }
        }
        printf("The factors of %d are: ", nat_num);
        for (n = 0; n < count; n++)
        {
            printf("%d ", factors[n]);
        }
        break;

    case 3:
        printf("Welcome to the Identical Matrix Checker.");
        printf("Do both the matrices have the same dimensions?\n0-->Yes\n1-->No:\n");
        scanf("%d",&check);
        if(check==1){
            printf("Your matrix is not an Identical Matrix.");
        }
        else{
        printf("Please enter the length of matrices: ");
        scanf("%d",&dimension[0]);
        printf("Please enter the breadth of matrices: ");
        scanf("%d",&dimension[1]);
        for(int m1_0 = 0; m1_0<dimension[0]; m1_0++){
            for(int m1_1 = 0; m1_1<dimension[1]; m1_1++){
                printf("Enter matrix 1's element %d %d: ",m1_0+1,m1_1+1);
                scanf("%d",&matrix1[m1_0][m1_1]);}
        }
        for(int m2_0 = 0; m2_0<dimension[0]; m2_0++){
            for(int m2_1 = 0; m2_1<dimension[1]; m2_1++){
                printf("Enter matrix 2's element %d %d: ",m2_0+1,m2_1+1);
                scanf("%d",&matrix2[m2_0][m2_1]);}
        }
        for(int o1 = 0; o1<dimension[0]; o1++){
            for(int o2 = 0; o2<dimension[1]; o2++){
                if(matrix1[o1][o2]==matrix2[o1][o2]){
                    continue;
                }
                else{
                    flag++;
                    break;
                }
            }
        }
        if(flag==0){
            printf("The two matrices are identical.");
        }
        else{
            printf("The two matrices are not identical.");
        }
        }
        break;        
    default:
        printf("Please enter a valid option.\n");
    }
    printf("\nThank you!\n");
    return 0;
}