#include <stdio.h>
int main()
{
    int i = 1;
    int n = 10;
    int f = 0;
    int s = 1;
    int t = f + s;
    for (i = 0; i < n; i++)
    {
        if (i <= 0)
        {
            printf("%d ", i);
            i++;
        }
        else
        {
            t = f + s;
            f = s;
            s = t;
        }
        printf("%d ", t);
    }
    return 0;
}