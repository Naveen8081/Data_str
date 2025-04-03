#include "main.h"

int merge_sort(int *array, int size)
{
    int mid=size/2,i; //we sholud spilit to 2 array
    if(size == 1) //if size reaches 1 return 
        return 1;
    int *lsa=malloc(sizeof(int)*mid); //allocating the memory for left side
    if(lsa == NULL)
        return FAILURE;
    for(i = 0 ;i <= mid -1; i++)  //mid times spilit  
    {
        lsa[i]=array[i];  // update left side array with right side array
    }
    int *rsa=malloc((size-mid)*sizeof(int)); //allocating memory for right side array
    if(rsa == NULL) //validate the memory
        return FAILURE;
    for(int j = mid ; j <= size - 1; j++)  //run till mid to last index
    {
        rsa[j-mid]=array[j]; //update right side array specify index with array index
    }
    merge_sort(lsa,mid); //spiliting main array into left side array and right side array
    merge_sort(rsa,size-mid); //spiliting left side array into two array
    merge(array,size,lsa,mid,rsa,size-mid); //spiliting right side array into two array
    return 1;

}
