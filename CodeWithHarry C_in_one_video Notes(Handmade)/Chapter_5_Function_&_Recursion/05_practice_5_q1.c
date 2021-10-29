//Average of 3 numbers.
#include<stdio.h>
float avg(float x, float y, float z);
int main(){
    float x, y, z;
    printf("Enter 1st Value:~>");
    scanf("%f", &x);
    printf("Enter 2nd Value:~>");
    scanf("%f", &y);
    printf("Enter 3rd Value:~>");
    scanf("%f", &z);
    printf("Average of %d, %d, %d : %f", (int) x ,(int) y,(int) z, avg(x, y, z));
    return 0;
}
float avg(float x, float y, float z){
    float result=(x+y+z)/3;
    return result;
}