#include"hash.h"

int search_HT(hash_t *arr, int data, int size)
{
    int index = data % size;
    for(int i = 0; i < size ; i++)
    {
        if(arr[index].value == data) // found the value between in the nodes
        return SUCCESS;
    }
    if(arr[index].link != NULL) // subnodes are available 
    {
     hash_t*temp = arr[index].link; // that link update to the temp
        while(temp != NULL) // traverse till end 
        {
            if(temp ->value == data)
                return SUCCESS; // if is matched
            temp = temp ->link; // if it is not matched traverse
        }
    }
    
    return DATA_NOT_FOUND; // return data not found
     
}