#include <stdio.h>
int main()
{
    int arr[10] = {21, 24, 45, 56, 43, 76, 73, 56, 32, 41};
    int *ptr=&arr[0];
    printf("%d\n", *ptr);
    ptr+=2;
    printf("%d\n", *ptr);
    return 0;
}