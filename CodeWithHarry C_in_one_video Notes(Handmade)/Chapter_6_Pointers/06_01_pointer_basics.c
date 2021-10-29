#include<stdio.h>
int main(){
    int a=10;//Simple Variable
    int *b=&a;//Pointer
    int **c=&b;//Pointer To Pointer
    printf(" Value  of a :----------->%d\n", a);
    printf("Address of a :----------->%u\n", &a);
    printf("Address of a from b :---->%u\n", b);
    printf("Address of b :----------->%u\n", &b);
    printf(" Value  of a from b :---->%d\n", *b);
    printf("Address of b from c :---->%u\n", c);
    printf("Address of a from c :---->%u\n", *c);
    printf(" Value  of a from c :---->%d\n", **c);
    return 0;
}