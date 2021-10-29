#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = calloc(6, sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        ptr[i] = i + 1;
        printf("ptr[%d]: %d\n", i, ptr[i]);
    }
    return 0;
}