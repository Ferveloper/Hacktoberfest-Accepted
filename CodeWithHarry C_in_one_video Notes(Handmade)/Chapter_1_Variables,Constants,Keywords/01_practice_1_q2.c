//Area of Circle Calculator
// #include<stdio.h>
// #include<unistd.h>
// int main(){
//     printf("Enter Radius of Circle:~>");
//     float r;
//     scanf("%f", &r);
//     printf("Area of Circle : %f m^2", r*r*3.141592654);
//     sleep(30);
//     return 0;
// }

//Volume of Cylinder Calculator
#include<stdio.h>
#include<unistd.h>
int main(){
    printf("Enter Radius of Cylinder:~>");
    float r;
    scanf("%f", &r);//Radius Input
    float h;
    printf("Enter Height of Cylinder:~>");
    scanf("%f", &h);//Height Input
    printf("Volume of Cylinder : %f m^3", 3.141592654*r*r*h);//Calculated Output
    sleep(30);
    return 0;
}