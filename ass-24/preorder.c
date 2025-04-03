#include "tree.h"

/* Function to print the tree in pre order */
int preorder(Tree_t *root)
{
    if(root != NULL)
    {
        printf("%d ",root -> data); //print it that data
        preorder(root -> left); // traverse left child
        preorder(root -> right); // traverse right child
    }
}