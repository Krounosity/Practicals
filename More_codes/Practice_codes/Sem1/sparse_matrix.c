#include<stdio.h>

int main(){
    int rows, columns;
    printf("Enter the number of rows in the matrix: ");
    scanf("%d",&rows);
    printf("Enter the number of columns in the matrix: ");
    scanf("%d",&columns);

    int matrix[rows][columns];
    for(int i = 0; i<rows; i++){
        for(int j = 0 ; j < columns; j++){
            printf("Enter element %d,%d: ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    int zeroes = 0, non_zeroes = 0;
    for(int i = 0; i<rows; i++){
        for(int j = 0 ; j < columns; j++){
            if(matrix[i][j]==0){
                zeroes++;
            } else {
                non_zeroes++;
            }
        }
    }
    float two_third = (2*rows*columns)/3;
    printf("Zeroes: %d\n Non-zeroes: %d\nTwo Thirds of total: %f\n",zeroes,non_zeroes,two_third);
    if(zeroes >= two_third){
        printf("Sparse matrix.\n");
    } else {
        printf("Not Sparse matrix.\n");
    }
    
    return 0;
}