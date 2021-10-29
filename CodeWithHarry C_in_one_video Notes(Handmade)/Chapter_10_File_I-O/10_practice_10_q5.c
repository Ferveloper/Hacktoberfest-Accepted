#include <stdio.h>
int main()
{
    int d=1;
    FILE *ptr, *ptr2;
    ptr = fopen("sample_8", "r");
    ptr2 = fopen("sample_8_a", "w");
    fscanf(ptr, "%d", &d);
    d*=2;
    fprintf(ptr2, "%d", d);
    return 0;
}