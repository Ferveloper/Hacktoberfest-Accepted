#include <stdio.h>
typedef struct vector
{
    float x;
    float y;
} vec;
void vec_sum(vec v1, vec v2, float *sum_x, float *sum_y)
{
    *sum_x = v1.x + v2.x;
    *sum_y = v1.y + v2.y;
}
int main()
{
    struct vector v1, v2;
    // v1.x = 4;
    // v1.y = 6;
    // v2.x = 8;
    // v2.y = 12;
    printf("\nEnter value for x1:~> ");
    scanf("%f", &v1.x);
    printf("\nEnter value for y1:~> ");
    scanf("%f", &v1.y);
    printf("\nEnter value for x2:~> ");
    scanf("%f", &v2.x);
    printf("\nEnter value for y2:~> ");
    scanf("%f", &v2.y);
    float x_sum;
    float y_sum;
    vec_sum(v1, v2, &x_sum, &y_sum);
    printf("\n(%.2f, %.2f) + (%.2f, %.2f) = (%.2f, %.2f)\n", v1.x, v1.y, v2.x, v2.y, x_sum, y_sum);
    return 0;
}