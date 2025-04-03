#include "main.h"

/* Function to partition the array */
int partition(int *arr, int first, int last)
{
    int pivot=first,p=first+1,q=last,temp;
    while(p<=q)
    {
        while(arr[p]<=arr[pivot])//it takes duplicates elements also ,when p index is greater than pivot index element is become false
            p++;  //increment the p
        while(arr[q]>arr[pivot]) //when arr[p] is lesser than arr[pivot] is become false
            q--; //decrement the q
        if(p<=q)  //if those condition getting false it will p and q 
        {
             temp=arr[p];
             arr[p]=arr[q];
             arr[q]=temp;
        }
    } //if those condition getting false it will p and q  
         temp=arr[q];
         arr[q]=arr[pivot];
         arr[pivot]=temp;
    return q; //we need to spilit the array so return q index
}