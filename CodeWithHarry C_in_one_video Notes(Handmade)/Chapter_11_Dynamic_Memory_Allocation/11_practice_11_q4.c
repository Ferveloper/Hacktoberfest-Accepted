#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        ptr[i] = i + 1;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("ptr[i]: %d\t&ptr[%d]: %d\n", ptr[i], i, &ptr[i]);
    }
    printf("\nAFTER REALLOCATION\n");
    ptr = realloc(ptr, 10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        ptr[i] = i + 1;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("ptr[i]: %d\t&ptr[%d]: %d\n", ptr[i], i, &ptr[i]);
    }
    return 0;
}