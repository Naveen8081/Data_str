#include "tree.h"

/* Function to insert the data's in BST */
int insert_into_BST(Tree_t **root, int data)
{
    Tree_t*node = malloc(sizeof(Tree_t));
    if(node == NULL)  
    {
        return FAILURE;
    }
    node -> right = NULL;
    node -> left = NULL;
    node -> data = data;
    int flag;
    if(*root == NULL)  // one data update with root
    {
        *root = node;
        return SUCCESS;
    }
    Tree_t*temp = *root,*parent = NULL; 
    while(temp != NULL) // traverse till null
    {
        parent = temp; // update parent with temp 
        if(data < temp -> data) // if data is lesser than than the temp data
        {
            temp = temp -> left;//temp move to left child
            flag =1; // make it flag as one 
        }
        else if(data > temp -> data)// if data is greater than the temp data
        {
            temp = temp -> right;// temp move to right child
            flag = 0;  // make it flag as zero
        } 
        else if(temp -> data == data) // duplicate elements are not allowed in the tree
        {
            return DUPLICATE;
        }
    }
    if(flag == 0)
    {
        parent -> right = node; //  update parent right with node 
        return SUCCESS;
    }
    if(flag == 1)
    {
        parent -> left = node;  // update parent left with node
        return SUCCESS;
        
    }
}