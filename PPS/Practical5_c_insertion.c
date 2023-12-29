//Including and defining preprocessor directives.
#include<stdio.h>
#define MAX 1000

//Main function.
int main(){
    //Array to be sorted.
    float arr[MAX];
    //Length of array to be taken from user.
    int length;

    //Taking length of array.
    printf("Enter the length of your array: ");
    scanf("%d",&length);

    //Taking array elements.
    for(int i =0;i<length;i++){
        printf("Enter element %d: ",i+1);
        scanf("%f",&arr[i]);
    }

   int i, key, j;
    
    //insertion sorting
    for (i = 1; i < length; i++) 
    {
        //Selecting the key elements.
        key = arr[i];

        //Selecting the index of the element before the key element.
        j = i - 1;

        //Shifting all elements to the right till either the end is reached or the current index element becomes equal or smaller than the key.
        while (j >= 0 && arr[j] > key) 
        {
            //Shifting right.
            arr[j + 1] = arr[j];
            
            //Moving index to left.
            j -= 1;
        }

        /* At this point, the current index is one index less than where the key element is to be inserted.
        Hence, we add the key element to "current index + 1". */
        arr[j + 1] = key;

    }
    
    //Printing the sorted array.
    for(int i=0;i<length;i++)
    {
        printf("%f ",arr[i]);
    }
    return 0;
}