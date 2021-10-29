#include<stdio.h>
int main(){
    printf("Enter Physics Marks:~>");
    float p;
    scanf("%f", &p);
    printf("Your Physics Marks are (%f/100).", p);
    printf("\nEnter Chemistry Marks:~>");
    float c;
    scanf("%f", &c);
    printf("Your Cemistry Marks are (%f/100).", c);
    printf("\nEnter Maths Marks:~>");
    float m;
    scanf("%f", &m);
    printf("Your Maths Marks are (%f/100).\n", m);
    float total_percent = (p + c + m)/3;
    printf("Percentage :  %f%% \n", total_percent);
    if(total_percent < 40 || p < 32 || c < 32 || m < 32){
        printf("Result : Fail");
    }
    else{
        printf("Result : Pass");
    }
    return 0;
}