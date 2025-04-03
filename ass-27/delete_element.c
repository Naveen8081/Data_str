#include"hash.h"

int delete_element(hash_t *arr, int data, int size)
{
      int index = data % size,i;
    
    if(arr[index].value == data) // found the value between in the nodes
    {
        if(arr[index]. link == NULL) // no sub nodes availabe
        {
            arr[index].value = -1;
        }
        else 
        {
            hash_t *temp = arr[index].link; //one sub nodes available
            arr[index]. value = temp -> value;
            arr[index].link = NULL; // update temp link wit arr[index].link that means that particular index
        }
        return SUCCESS;
    }
    
    else
    {
        hash_t *cur = arr[index].link,*prev = NULL;
        while(cur != NULL) // traverse till end 
        {
            if(cur->value == data) //having some sub nodes are available 
            {
                if(prev == NULL) // one sub nodes are available 
                {
                    arr[index].link = cur -> link; //update with arr[index].link with cur link
                    return SUCCESS;
                }
                prev -> link = cur -> link; // having some nodes update prev link with cur link
                return SUCCESS;
            }
            else
            {
                prev = cur; // traverse update prev with cur
                cur = cur -> link; //traverse update cur with cur link
            }
        }
    }
    
    return DATA_NOT_FOUND; // return data not found
}