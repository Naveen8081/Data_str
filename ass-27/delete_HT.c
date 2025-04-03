#include"hash.h"

int destroy_HT(hash_t *arr, int size)
{
    hash_t*temp,*prev;
   for(int i=0 ;i < size ; i++)
   {
        temp = arr[i].link; // update temp with arr[i].link
        while(temp != NULL)
        {
            prev = temp; //update prev with temp
            temp = temp ->link; //update temp with temp link
            free(prev); //free the temp
        } 
        arr[i].value = -1; //update with that particular index value make it is -1
        arr[i].link = NULL; //update with that particular index value make it is NULL
   }
   return SUCCESS;
}