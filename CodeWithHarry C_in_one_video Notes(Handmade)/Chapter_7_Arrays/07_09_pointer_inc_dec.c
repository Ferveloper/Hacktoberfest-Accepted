#include <stdio.h>
int main()
{
    int a[] = {1, 4, 3};
    int *b = &a;
    printf("Value of \"a\" : %d\n", *b);
    b++;
    printf("AFTER POINTER INCREMENT!\n");
    printf("Value of \"a\" : %d\n", *b);
    b--;
    printf("AFTER POINTER DECREMENT!\n");
    printf("Value of \"a\" : %d", *b);
    return 0;
}