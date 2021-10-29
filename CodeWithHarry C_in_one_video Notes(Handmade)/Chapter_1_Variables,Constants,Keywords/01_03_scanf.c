#include<stdio.h>
#include<unistd.h>
int main(){
    printf("Enter a number.:~>");
    int a;
    scanf("%d", &a);
    printf("The number was : %d", a);
    sleep(30);
    return 0;
}
/*******EXAMPLE*******/
// #include<stdio.h>
// int main(){
//     printf("Enter first no.:~>");
//     float a;
//     scanf("%f", &a);
//     printf("Enter second no.:~>");
//     float b;
//     scanf("%f", &b);
//     printf("The result is : %f", a+b);
// return 0;
// }