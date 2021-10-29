//Celsius To Farenheit Converter
#include <stdio.h>
float temp2far(float x);
float far2temp(float y);
int main()
{
    int choice;
    printf("Choose the conversion:\n    1.Celsius to Farenheit\n    2.Farenheit to Celsius\n                        (C/F):~>");
    scanf("%d", &choice);
    if (choice == 1)
    {
        float celsius;
        printf("Enter Temperature in Celsius:~>");
        scanf("%f", &celsius);
        printf("%.2f Celsius = %.2f Farenheit", celsius, temp2far(celsius));
    }
    else if (choice == 2)
    {
        float farenheit;
        printf("Enter Temperature in Farenheit:~>");
        scanf("%f", &farenheit);
        printf("%.2f Farenheit = %.2f Celsius", farenheit, far2temp(farenheit));
    }
    else{
        printf("Invalid Choice!\nTerminating Program...");
    }
    
    return 0;
}
float temp2far(float x)
{
    float farenheit = (x * (9 / 5) + 32);
    return farenheit;
}
float far2temp(float y)
{
    float celsius = (y - 32) * 5 / 9;
    return celsius;
}