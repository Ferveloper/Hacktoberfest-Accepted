#include <stdio.h>
int main()
{
    int apps[3][2] =             {{1, 2},         {3, 4},         {5, 6}};
    //Coordinates of 2d array[(0, 0), (0, 1), (1, 0), (1, 1), (2, 0), (2, 1)]
    printf("%d", apps[1][1]);
    return 0;
}