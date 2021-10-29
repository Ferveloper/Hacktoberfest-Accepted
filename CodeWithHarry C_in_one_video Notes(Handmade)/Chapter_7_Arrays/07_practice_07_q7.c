#include <stdio.h>
int main()
{
    int table[3][10];
    for (int i = 1; i <= 10; i++)
    {
        table[0][i - 1] = 2 * i;
    }
    for (int i = 1; i <= 10; i++)
    {
        printf("2 x %d = %d\n", i, table[0][i - 1]);
    }
    printf("\n\n");
    for (int i = 1; i <= 10; i++)
    {
        table[1][i - 1] = 7 * i;
    }
    for (int i = 1; i <= 10; i++)
    {
        printf("7 x %d = %d\n", i, table[1][i - 1]);
    }
    printf("\n\n");
    for (int i = 1; i <= 10; i++)
    {
        table[2][i - 1] = 9 * i;
    }
    for (int i = 1; i <= 10; i++)
    {
        printf("9 x %d = %d\n", i, table[2][i - 1]);
    }
    return 0;
}