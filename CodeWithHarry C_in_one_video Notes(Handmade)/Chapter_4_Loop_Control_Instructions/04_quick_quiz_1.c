#include <stdio.h>
int main()
{
    int a = 0;
    while (a <= 9)
    {
        a++;
    }
    while (a >= 9 && a <= 20)
    {
        printf("The value of a is %d \n", a);
        a++;
    }
    return 0;
}