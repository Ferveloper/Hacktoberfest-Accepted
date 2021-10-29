//Factorial Calculator Using Recursion.
#include <stdio.h>
int factorial(int x);
int main()
{   int input;
    printf("Enter a Value:~>");
    scanf("%d", &input);
    printf("Value of factorial %d is %d", input, factorial(input));
    return 0;
}
int factorial(int x)
{
    if (x == 0)
    {
        return 1; //Factorial 0 = 1
    }
    else
    {
        int answer = x * factorial(x - 1);//Recurring factorial() with (x - 1), The cycle continues till x = 0.
        return answer;
    }
}