#include "main.h"

data_t insertion(data_t *arr, data_t size)
{
    int key,j;
    for(int i=1 ;i < size ;i++)
    {
        key=arr[i]; //that particular index we assign to key
        j=i-1; //decrement the i value
        while(j >= 0 && arr[j] > key) //if both conditions satifies 
        {
            arr[j+1] = arr[j]; //update next data with present data
            j = j-1; //decrement the j value
        }
         arr[j+1] = key; //backup on key update next data with key
        
    }
    return 1;
}