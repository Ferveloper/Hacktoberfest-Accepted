#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int no_int;
    printf("Specify no. of integers:~>");
    scanf("%d", &no_int);
    ptr = (int *)calloc(no_int, 4);
    ptr = (int *)calloc(no_int, sizeof(int));
    for (int j = 0; j < no_int; j++)
    {
        printf("ptr[%d]: %d\n", j, ptr[j]);
    }
    return 0;
}