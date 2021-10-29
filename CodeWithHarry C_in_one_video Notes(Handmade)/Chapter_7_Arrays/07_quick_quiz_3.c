#include <stdio.h>
int main()
{
    int x = 3;
    int y = 3;
    int xy[3][3];
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            printf("Enter value for (%d, %d) : ", i, j);
            scanf("%d", &xy[i - 1][j - 1]);
        }
    }

    printf("\n%d        %d        %d\n", xy[0][0], xy[0][1], xy[0][2]);
    printf("\n%d        %d        %d\n", xy[1][0], xy[1][1], xy[1][2]);
    printf("\n%d        %d        %d\n", xy[2][0], xy[2][1], xy[2][2]);
    return 0;
}