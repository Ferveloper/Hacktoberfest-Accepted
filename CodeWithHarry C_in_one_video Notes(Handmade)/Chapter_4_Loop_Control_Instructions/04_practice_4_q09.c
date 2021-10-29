#include <stdio.h>
int main()
{
    int i = 2;
    int n;
    int p = 1;
    printf("Enter a no.:~>");
    scanf("%d", &n);
    for (i; i < n; i++)
    {
        if (n % i == 0)
        {
            p = 0;
            break;
        }
    }
    if (p == 0)
    {
        printf("Given number is a composite number.");
    }
    else
    {
        printf("Given number is a prime number.");
    }
    return 0;
}