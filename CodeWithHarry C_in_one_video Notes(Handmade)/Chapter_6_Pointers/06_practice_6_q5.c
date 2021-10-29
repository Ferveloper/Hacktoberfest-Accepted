#include<stdio.h>
int main(){
    int i=10;
    int *j=&i;
    int **k=&j;
    printf("Value of \"i\" from \"**k\" : %d", **k);
    return 0;
}