//Simple Interest Calculator
#include<stdio.h>
#include<unistd.h>
int main(){
    printf("Enter Principle Value:~>");
    float p;
    scanf("%f", &p);//Principle Input
    printf("Enter Rate Value:~>");
    float r;
    scanf("%f", &r);//Rate Input
    printf("Enter Duration Time:~>");
    float t;
    scanf("%f", &t);//Time Input
    float a = p*r*t;
    printf("Simple Interest : %f%%", a/100);//Calculated Output
    sleep(30);
    return 0;
}