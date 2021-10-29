#include<stdio.h>
int main(){
    int a=10;
    printf("Value: %d\nAddress : %u", a, &a);
    int *b=&a;
    b++;//Value will be incremented by +4(Integer holds 4 bytes).
        //Same is for other datatypes.
    printf("\nINCREMENT APPLIED!");
    printf("\nValue: %d\nAddress : %u", a, b);
    b--;//Value will be incremented by -4(Integer holds 4 bytes).
    printf("\nDECREMENT APPLIED!");
    printf("\nValue: %d\nAddress : %u", a, b);
    return 0;
}