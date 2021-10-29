//Factorial Calculator
#include<stdio.h>
int main(){
    int a=1, b, fac=1;
    printf("Enter a No.:~>");
    scanf("%d", &b);
    while(b>=a){
        //printf("%d\n", a);
        fac *=a;
        a++;
    }
    printf("Value of factorial %d is %d", b, fac);
    return 0;
}   