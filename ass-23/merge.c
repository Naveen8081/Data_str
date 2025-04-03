#include "main.h"


void merge(int *array, int size, int *left, int mid1, int *right, int mid2)
{
   int i=0,j=0,k=0;
   while(i < mid1 && j < mid2) //loop run till mid1 and mid2 index
   {
       if(left[i] < right[j]) // left side array is lesser than the right side array 
       {
           array[k] = left[i]; //update array that specify index with left side array
            i++,k++; //and increment both index
       }
       else
       {
            array[k] = right[j]; //update array that specify index with side side array
            j++,k++; //and increment both index
       }
   }
   while(j < mid2) //if the size is odd no we have a still one value 
   {
       array[k] = right[j];//update array that specify index with side side array
       j++,k++; //and increment both index
   }
   while(i < mid1)
   {
       array[k] = left[i];//update array that specify index with left side array
       i++,k++; //and increment both index
   }
}