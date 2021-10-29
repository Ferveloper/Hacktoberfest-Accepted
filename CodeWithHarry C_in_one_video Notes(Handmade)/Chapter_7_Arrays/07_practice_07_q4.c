#include <stdio.h>
int main()
{
    int input;
    printf("Enter a number:~>");
    scanf("%d", &input);
    int table[input];
    for (int i = 1; i <= 10; i++)
    {
        table[i - 1] = input * i;
    }
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", input, i, table[i - 1]);
    }
    return 0;
}