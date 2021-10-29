#include <stdio.h>
int swap_by_value(int a, int b);
int swap_by_reference(int *a, int *b);
int main()
{
    int a = 3;
    int b = 4;
    printf("\nValue of a : %d\nValue of b : %d\n", a, b);
    swap_by_reference(&a,&b);
    printf("VALUES AFTER SWAP");
    printf("\nValue of a : %d\nValue of b : %d", a, b);
    return 0;
}
int swap_by_value/*DOSEN'T WORK!*/(int a, int b){
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
    return 0;
}
int swap_by_reference(int *a, int *b){
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}