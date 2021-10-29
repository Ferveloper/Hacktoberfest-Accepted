#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = calloc(6, sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("Enter value for ptr[%d]:~>", i);
        scanf("%d", &ptr[i]);
        fflush(stdin);
    }
    printf("\n");
    for (int i = 0; i < 6; i++)
    {
        printf("ptr[%d]: %d\n", i, ptr[i]);
    }
    return 0;
}