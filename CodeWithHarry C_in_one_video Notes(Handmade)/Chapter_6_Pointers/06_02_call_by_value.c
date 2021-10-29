#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a = 2;
    int b = 3;
    printf("Value of %d + %d = %d", a, b, sum(a, b));
    printf("\nValue of a : %d(After Function Call)\nValue of b : %d(After Function Call)", a, b);
    return 0;
}
int sum(int a, int b)
{
    int c = a + b;
    a = 1234;
    b = 2342;
    return c;
}