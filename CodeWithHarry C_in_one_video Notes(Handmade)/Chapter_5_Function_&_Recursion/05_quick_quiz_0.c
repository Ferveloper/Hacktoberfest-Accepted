#include<stdio.h>
#include<math.h>
int main(){
    int area;
    printf("Enter Area of Square:~>");
    scanf("%d", &area);
    printf("Result: %d sq.cm", (int)pow(area, 2));
}