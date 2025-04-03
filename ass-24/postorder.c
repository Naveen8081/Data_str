#include "tree.h"

/* Function to print the tree in post order */
int postorder(Tree_t *root)
{
    if(root != NULL)
    {
        postorder(root -> left); //traverse left child
        postorder(root -> right); // traverse right child
        printf("%d ",root -> data); // print it that data
    }
}