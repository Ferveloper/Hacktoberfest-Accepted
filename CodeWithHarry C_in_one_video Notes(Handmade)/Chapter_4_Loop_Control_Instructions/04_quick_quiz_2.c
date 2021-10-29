#include <stdio.h>
int main()
{
    int a = 1, b;
    printf("Enter a no.:~>");
    scanf("%d", &b);
    do
    {
        printf("%d \n", a);
        a++;
    } while (a < b + 1);
    return 0;
}