//Program to check the data-type memory allocation for any architecture.
#include <stdio.h>
int main()
{
    int a = 1;
    int *b = &a;
    int *c = b++;
    int d = (int)b - (int)c;
    (d == 1) ? printf("\nMemory Allocation of Integer : %u Byte\n", d) : printf("\nMemory Allocation of Integer : %u Bytes\n", d);

    float p = 32.57;
    float *q = &p;
    float *r = q++;
    int s=(int)q - (int)r;
    (s == 1) ? printf("\nMemory Allocation of Integer : %u Byte\n", s) : printf("\nMemory Allocation of Integer : %u Bytes\n", s);

    char x = 'A';
    char *y = &x;
    char *z = y++;
    int w = (int)y - (int)z;
    (w == 1) ? printf("\nMemory Allocation of Integer : %u Byte\n", w) : printf("\nMemory Allocation of Integer : %u Bytes\n", w);

    return 0;
}