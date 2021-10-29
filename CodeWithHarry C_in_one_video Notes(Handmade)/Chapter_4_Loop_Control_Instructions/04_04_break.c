#include <stdio.h>
int main()
{
    int a = 0;
    while (a < 5)
    {
        printf("While loop ran %d times.\n", a+1);
        break;//BREAK STATEMENT(Try commeting it to see the working.)
        a++;
    }
    printf("While loop ended.");
    return 0;
}