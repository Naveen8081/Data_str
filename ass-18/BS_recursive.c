#include "main.h"

/* Function to search the element using binary search */
data_t binarySearch_recursive(data_t *arr, data_t size, data_t key, data_t first, data_t last)
{
    int mid;
    if(first<=last)
    {
        mid=(first+last)/2;
        if(key>arr[mid])
            binarySearch_recursive(arr,size,key,mid+1,last);
        else if(key<arr[mid])
             binarySearch_recursive(arr,size,key,first,mid-1);
        else if(key==arr[mid])
            return mid;
    }
    else
        return DATA_NOT_FOUND;
}