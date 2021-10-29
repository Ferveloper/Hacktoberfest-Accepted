#include <stdio.h>
struct vector
{
    int x;
    int y;
};
int main()
{
    struct vector v1, v2;
    v1.x = 4;
    v1.y = 6;
    printf("(x1, y1): (%d, %d)\n", v1.x, v1.y);
    v2.x = 8;
    v2.y = 12;
    printf("(x2, y2): (%d, %d)\n", v2.x, v2.y);
    return 0;
}