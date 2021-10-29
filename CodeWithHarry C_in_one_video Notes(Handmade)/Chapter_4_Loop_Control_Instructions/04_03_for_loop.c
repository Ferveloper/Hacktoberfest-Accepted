#include <stdio.h>
int main()
{
    int a = 0;
    int b;
    printf("Enter a no.:~>");
    scanf("%d", &b);
    for (a++; a <= b; a++)//FOR loop.(ONCE;CONDITION;LOOPING_CODE)
    {
        printf("%d\n", a);
    }
    return 0;
}