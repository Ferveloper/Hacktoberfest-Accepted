#include <stdio.h>
void pp(int x);
int main()
{
    pp(5);
    return 0;
}
void pp(int x)
{
    if (x == 1)
    {
        printf("*\n");
        return;
    }
    pp(x - 1);
    for (int i = 0; i < x/*(2*x-1)*/; i++)
    {
        printf("*");
    }
    printf("\n");
}