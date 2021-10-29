#include <stdio.h>
int value_10x(int i);
int main()
{
    int i = 10;
    printf("Value of i before value_10x() : %d", i);
    value_10x(i);
    printf("\nValue of i after  value_10x() : %d", i);
    return 0;
}
int value_10x(int i)
{
    return 10 * i;
}