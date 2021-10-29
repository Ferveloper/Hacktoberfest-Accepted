#include <stdio.h>
int sum_avg(float a, float b, float *sum, float *avg);
int main()
{
    float a = 5;
    float b = 20;
    float sum = 0;
    float avg = 0;
    sum_avg(a, b, &sum, &avg);
    printf("Value of a : %f\nValue of b : %f\nSum of a&b : %f\nAvg of a&b : %f", a, b, sum, avg);
    return 0;
}
int sum_avg(float a, float b, float *sum, float *avg)
{
    *sum = a + b;
    *avg = (a + b) / 2;
}