#include<stdio.h>
int main(){
    int a=10;
    int *b=&a;
    printf("Address of a : %u\n", b);
    printf("Value of a : %d", *b);
    return 0;
}