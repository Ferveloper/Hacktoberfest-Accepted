#include <stdio.h>
typedef struct real_comp
{
    float real;
    float complex;
} rc;
int display();
int main()
{
    rc arr[5];
    for (int i = 1; i <= 5; i++)
    {
        printf("  Real  Value_%d: ", i);
        scanf("%f", &arr[i - 1].real);
        printf("Complex Value_%d: ", i);
        scanf("%f", &arr[i - 1].complex);
    }
    printf("\n\n\n");
    for(int j=1; j<=5; j++){
        *arr=arr[j-1];
        display(arr, j);
    }
    return 0;
}
int display(rc *ars, int n){
        printf("  Real  Value_%d: %.2f\n", n,  (*ars).real);
        printf("Complex Value_%d: %.2f\n", n, (*ars).complex);

}