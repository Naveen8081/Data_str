#include "main.h"

/* Function to sort the array in quick sort method */
int quick_sort( int *arr, int first, int last )
{
    int index;
    if(first<last)  //when first less than last the loop will stop
    {
      index=partition(arr,first,last);  //we spiliting in two array
      quick_sort(arr,first,index-1); //spilited left side array
      quick_sort(arr,index+1,last); //spilited right side array
    }
}