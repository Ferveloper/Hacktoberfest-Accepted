//Upto 2.5L=0, 2.5L-5.0L=5%, 5.0L-10.0L=20%, Above 10.0L=30%
#include<stdio.h>
float main(){
    float income;
    printf("Enter Income :~>");
    scanf("%f", &income);
    if (income <= 250000){
        printf("Income Tax to Pay : %f INR", (income-250000)*0);
    }
    else if (income > 250000 && income <= 500000){
        printf("Income Tax to Pay : %f INR", (income-250000)*0.05);
    }
    else if (income > 500000 && income < 1000000){
        printf("Income Tax to Pay : %f INR", (income-500000)*0.20);
    }
    else if (income > 1000000){
        printf("Income Tax to Pay : %f INR", (income-1000000)*0.30);
    }
    else{
        printf("Invalid Input!Try Again");
    }
    return 0;
}