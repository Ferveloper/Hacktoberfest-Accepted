//Object Mass (On Earth) Calculator
#include <stdio.h>
float mass_(float x);
int main()
{
    float mass;
    printf("Enter Weight of Mass:~>");
    scanf("%f", &mass);
    printf("Result: %.3f", mass_(mass));
    return 0;
}
float mass_(float x)
{
    float result = x * 9.8;
    return result;
}