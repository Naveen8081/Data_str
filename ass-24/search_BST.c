#include "tree.h"

/* Iteratively */
int search_BST(Tree_t * root, int data)
{
    if(root == NULL)
        return FAILURE; // list was empty
    Tree_t *temp = root;
    while(temp != NULL) // traverse till null
    {
        if(data < temp -> data) // if data is lesser than than the temp data
        {
            temp = temp ->left; //temp move to left child
        }
        else if( data > temp -> data) // if data is greater than the temp data
        {
            temp = temp -> right; // temp move to right child
        }
        else if( data == temp -> data)// data is matched
        {
            return SUCCESS; // return success
        }
    }
    return NOELEMENT; //data not found in the tree
}