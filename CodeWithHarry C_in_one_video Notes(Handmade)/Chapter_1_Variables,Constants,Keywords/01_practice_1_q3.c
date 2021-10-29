//Celsius to Farenheit Calculator
#include<stdio.h>
#include<unistd.h>
int main(){
    float c;
    printf("Enter Value in Celsius:~>");
    scanf("%f", &c);//Celsius Input
    float x = (c*9/5)+32;//Formula Calculation
    printf("Value in Farenheit : %f Degree Farenheit", x);//Calculated Output
    sleep(30);
    return 0;
}