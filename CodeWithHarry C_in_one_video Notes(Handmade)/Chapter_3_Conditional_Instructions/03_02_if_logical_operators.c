#include<stdio.h>
int main(){
    int age;
    printf("Enter your age:~>");
    scanf("%d", &age);
    if (age > 120){
        printf("Please enter valid age or lick my ass!");
    }
    else if (age <= 80 && age >= 18){
        printf("You can drive a vehicle");
    }
    else {
        printf("You can't drive a vehicle.");
    }
    return 0;
}