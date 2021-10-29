#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *table_7;
    table_7 = calloc(10, sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        table_7[i] = 7 * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("7 x %d = %d\t&ptr[%d]: %d\n", i + 1, table_7[i], i, &table_7[i]);
    }
    printf("\nAFTER REALLOCATION\n");
    table_7 = realloc(table_7, 15 * sizeof(int));
    for (int i = 0; i < 15; i++)
    {
        table_7[i] = 7 * (i + 1);
    }
    for (int i = 0; i < 15; i++)
    {
        printf("7 x %d = %d\t&ptr[%d]: %d\n", i + 1, table_7[i], i, &table_7[i]);
    }
    return 0;
}