//Find the Greatest of 4 Numbers
#include<stdio.h>
int main(){
    float a, b, c, d;
    printf("Enter 1st Number:~>");
    scanf("%f", &a);
    printf("Enter 2nd Number:~>");
    scanf("%f", &b);
    printf("Enter 3rd Number:~>");
    scanf("%f", &c);
    printf("Enter 4th Number:~>");
    scanf("%f", &d);
    if(a>b && a>c && a>d){
        printf("%f is the greatest number.", a);
    }
    else if(b>a && b>c && b>d){
        printf("%f is the greatest number.", b);
    }
    else if(c>a && c>b && c>d){
        printf("%f is the greatest number.", c);
    }
    else if(d>a && d>b && d>c){
        printf("%f is the greatest number.", d);
    }
    else{
        printf("Invalid Input!");
    }
    return 0;
}