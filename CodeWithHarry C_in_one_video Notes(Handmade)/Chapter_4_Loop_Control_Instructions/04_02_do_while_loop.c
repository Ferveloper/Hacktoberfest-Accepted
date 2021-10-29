#include <stdio.h>
int main()
{
    int a = 0;
    do//DO WHILE LOOP(First run the loop once then check the condition.)
    {
        printf("The value of a is %d \n", a);
        a++;
    } while (a <= 10);
    return 0;
}