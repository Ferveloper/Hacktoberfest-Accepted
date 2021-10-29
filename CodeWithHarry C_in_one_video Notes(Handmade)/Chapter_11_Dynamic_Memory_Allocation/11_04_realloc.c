#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = calloc(5, sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        ptr[i] = i + 1;
    }
    printf("\nFIRST ALLOCATION\n");
    for (int i = 0; i < 5; i++)
    {
        printf("ptr[%d]: %d\t&ptr[%d]: %d\n", i, ptr[i], i, &ptr[i]);
    }
    printf("\nAFTER REALLOCATION\n");
    //"realloc()" is used to REALLOCATE the momory.
    ptr = realloc(ptr, 5 * sizeof(int));
    int z = 10;
    for (int j = 0; j < 5; j++)
    {
        ptr[j] = z;
        z++;
    }
    for (int j = 0; j < 5; j++)
    {
        printf("ptr[%d]: %d\t&ptr[%d]: %d\n", j, ptr[j], j, &ptr[j]);
    }
    return 0;
}