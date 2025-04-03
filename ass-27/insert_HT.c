#include"hash.h"

int insert_HT(hash_t *arr, int element, int size)
{
    int index = element % size;
    for( int i= 0 ; i < size ; i++)
    {
        if(arr[index].value == -1 ) // first we need to check partiular index free or occupied
        {                           //not occupied
            arr[index].index = index;  //that particular index update with index 
            arr[index].value = element; // that particular index update with value
            arr[index].link = NULL; //make it as NULL
            return SUCCESS; 
        }
        else
        {                           //occupied
            hash_t*new = malloc (sizeof(hash_t)); //create a new space
            if(new == NULL)
                return FAILURE;
            new -> value = element ; //new value update with element
            new -> index = index; //new index with index
            new -> link = NULL; // update new link with null
            if(arr[index].link == NULL) // we need chech that particular index whether null or not 
            {                           //if it is NULL
                arr[index].link = new; //upadte with that particular index new address
                return SUCCESS;
            }
            hash_t*temp = arr[index].link; //if it is not NULL that means some sub nodes are available
            while(temp -> link != NULL) //traverse till end
            {
                temp = temp ->link; //traverse 
            }
            temp -> link = new; //update temp link with new 
            return SUCCESS;
        }
    }
}