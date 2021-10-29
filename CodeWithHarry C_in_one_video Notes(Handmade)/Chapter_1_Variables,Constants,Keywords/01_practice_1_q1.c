//Rectangle Area Calculator
#include<stdio.h>
#include<unistd.h>
int main(){
    printf("Enter Length of the Rectangle (cm):~>");
    float l;
    scanf("%f", &l);//Length Input
    printf("Enter Breadth of the Rectangle (cm):~>");
    float b;
    scanf("%f", &b);//Breadth Input
    printf("Area of Rectangle is : %f sq.cm", l*b);//Calculated Output
    sleep(30);
return 0;
}