#include "main.h"

data_t bubble(data_t *arr, int size )
{
    int temp;
    for(int i=0 ;i < size -1; i++)
    {
        for(int j=0; j < size -1 -i ;j++)
        {
            if(arr[j] > arr[j+1]) //comparing j index and j+1 index
            {
                temp=arr[j]; //swap the variables
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}