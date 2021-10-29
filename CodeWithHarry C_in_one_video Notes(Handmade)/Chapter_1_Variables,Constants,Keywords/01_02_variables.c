#include<stdio.h>
#include<unistd.h>
int main(){
/*
VARIABLES
    %d : int
    %f : float
    %c : char
*/
    int a = 1;
    float b = 1.2;
    char c = 'a';
    printf("\nVARIABLES\nValue of a = %d\nValue of b = %f\nValue of c = %c\na is integer    b is float  c is character", a, b, c);
    sleep(30);
    return 0;
}