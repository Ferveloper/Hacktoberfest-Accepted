#include <stdio.h>
int main()
{
    int table_5[10];
    for (int i = 1; i <= 10; i++)
    {
        table_5[i - 1] = 5 * i;
    }
    for (int i = 1; i <= 10; i++)
    {
        printf("5 x %d = %d\n", i, table_5[i - 1]);
    }
    return 0;
}