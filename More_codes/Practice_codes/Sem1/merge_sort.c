//Including and defining preprocessor directives.
#include <stdio.h> //Including the standard library.
#define MAX 1023 //Defining a constant variable called "MAX" with the value of 1023.

//Declaring global variables.
int length; //Length of array.
int array[MAX]; //Array containing input numbers.

//Declaring user-defined functions.
void merge_sort(int low, int high); //Used to "Divide".
void merge(int low, int middle, int high);  //Used to "Conquer".

//Main function.
int main(){

    //Getting the length of the array.
    printf("What is the length of the array?");
    scanf("%d",&length);

    //Getting the elements of the array.
    printf("Enter the numbers in the array.\n");
    for(int i=0;i<length;i++){
        scanf("%d",&array[i]);
    }

    //Starting the dividing process.
    merge_sort(0,length);

    //Printing the sorted array.
    for(int w=1;w<=length;w++){
        printf("%d ",array[w]);
    }
}

//Defining the function which "Divides".
void merge_sort(int low, int high){

    //Condition: if lowermost number is *strictly* less than the highest number.
    if(low<high){

        //Declare and initialize the value of "middle".
        int middle = (low+high)/2;

        //Breaking the array in 2.
        merge_sort(low, middle); //The left part of the broken array, recurred.
        merge_sort(middle+1, high); //The right part of the broken array, recurred.
        merge(low, middle, high); //Merging the two, thereby, "Conquering".

    }
}

//Defining the function which "Conquers".
void merge(int low, int middle, int high){

    //Declaring variables.
    int i=low; //Lowest number, used as lower limit for 1st array.
    int j=middle+1; //The middle number, used as lower limit of 2nd array.
    int k=low; //Lower limit variable used for the temporary array..
    int temp[MAX]; //Array temporarily storing the sorted numbers.

    //Condition: While the index of 1st array is less than the middle number and the index of the 2nd array is less than the highest number.
    while((i<=middle) && (j<=high)){
        //If number in array 1 at index "i" is smaller or equal to number in array 2 at index "j".
        if(array[i]<=array[j]){

            temp[k++]=array[i++]; //Append the number in the temporary array.

        }
        else{

            temp[k++]=array[j++]; //Append the number in the temporary array.
        
        }
    }

    //At this point, one of the two arrays, array 1 and array 2, have been extinguished.

    //If array 1 has not been extinguished, appending all it's elements in the temporary array.
    while(i<=middle){
        temp[k++]=array[i++];
    }

    //Else if array 2 has not been extinguished, appending all it's elements in the temporary array.
    while(j<=high){
        temp[k++]=array[j++];
    }

    //Now updating the main array with the elements of the sorted temporary array.
    for(int v=low; v<=high; v++){
        array[v]=temp[v];
    }
}