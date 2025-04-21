#include <stdlib.h>

int main() {
    int *ptr = (int*) malloc(sizeof(int));  // Allocate memory
    free(ptr);  // First free
    //ptr = NULL;
   //free(ptr);  // Second free (causes error)
    return 0;
}

