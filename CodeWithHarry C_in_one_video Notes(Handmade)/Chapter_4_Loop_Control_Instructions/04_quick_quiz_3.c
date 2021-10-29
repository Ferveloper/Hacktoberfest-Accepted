#include <stdio.h>
int main()
{
    int a;
    printf("Enter a no.:~>");
    scanf("%d", &a);
    for (a; a; a--)
    {
        printf("%d\n", a);
    }
    return 0;
}