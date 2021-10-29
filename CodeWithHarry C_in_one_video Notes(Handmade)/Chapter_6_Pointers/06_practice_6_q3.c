#include <stdio.h>
int value_10x(int *i);
int main()
{
    int a = 10;
    value_10x(&a);
    printf("%d", a);
    return 0;
}
int value_10x(int *i)
{
    *i = 10 * (*i);
    return 0;
}