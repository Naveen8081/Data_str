#include "main.h"

data_t selection(data_t *arr, data_t size )
{
    int cur_min,temp,j;
    for(int i=0 ; i<size -1 ; i++)
    {
      cur_min=i;
      for(j=i+1 ;j < size ; j++) //update j with next element
      {
          if( arr [j] < arr [cur_min]) //compare j with current min element 
            cur_min = j; //we are updating cur_min with j
      }
       if(cur_min != i) // cur _min is not equal to i swap the two index variable
       {
          temp = arr[i];
          arr[i] = arr[cur_min];
          arr[cur_min] = temp;
       }
    }
    return 1;
}