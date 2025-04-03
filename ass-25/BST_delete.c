#include "tree.h"

extern int status;
/* Function to delete the node  */
Tree_t * delete_BST(Tree_t * root, int data)
{
    if(root == NULL) // if root was empty 
        return NULL; // return address of null
    Tree_t *temp;
    int min;
    if(root != NULL) //traverse till end
    {
        if(data < root -> data) // if data is lesser than root data
        {
        root -> left = delete_BST(root -> left , data); // return the particular right side address 
        }
        else if(data > root -> data) // if data is greater than the root data
        {
            root -> right= delete_BST(root -> right , data);  // return the particular address left side
        }
        else // if data and node data is matched
        {
            /*If no child present in the particular node */
            if(root -> left == NULL && root -> right == NULL)  
            {
                status = 1; // make a status as 1
                free(root); // root is pointing at that particular node  and free the memory
                return NULL; //that particular return address
            }
            else if(root -> left != NULL && root -> right == NULL) // if left side have one child node
            {
                status = 1; // make a status as 1
                temp = root -> left; // we store the address in one temp pointer because free the memory it will lose data happen
                free(root); /// root is pointing at that particular node  and free the memory
                return temp;//that particular return address
            }
            else if(root -> left == NULL && root -> right != NULL)
            {
                status = 1;// make a status as 1
                temp = root -> right;// we store the address in one temp pointer because free the memory it will lose data happen
                free(root);// root is pointing at that particular node  and free the memory
                return temp;//that particular return address
            }
            else
            {
                min = findmin(root -> right); // we find the min node 
                root -> data = min; // that data update the root data
                root -> right = delete_BST(root -> right,min);//that address we want update that particular address
                status = 1;
            }
        }
        
    }
    return root; // return the root address
}