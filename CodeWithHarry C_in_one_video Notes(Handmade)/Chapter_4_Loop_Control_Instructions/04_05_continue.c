#include <stdio.h>
int main()
{
    int i = 0;
    while (i < 10)
    {
        i++;
        if (i != 5)
        {
            printf("before continue\n");
            continue;//Ends the while loop AND RUNS IT AGAIN! DOSENT READ CODE AFTER WHILE LOOP!
        }
        else
        {
            printf("in else loop i = %d\n", i);
        }
    }
    printf("after while loop i = %d\n", i);
    return 0;
}
