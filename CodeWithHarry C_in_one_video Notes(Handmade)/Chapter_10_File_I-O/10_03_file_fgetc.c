#include<stdio.h>
int main(){
    FILE *ptr;
    ptr=fopen("sample_3", "r");
    //fgetc reads character one-by-one from the input file
    printf("My username : %c\n", fgetc(ptr));
    printf("My username : %c\n", fgetc(ptr));
    printf("My username : %c\n", fgetc(ptr));
    printf("My username : %c\n", fgetc(ptr));
    printf("My username : %c\n", fgetc(ptr));
    printf("My username : %c\n", fgetc(ptr));
    printf("My username : %c\n", fgetc(ptr));
    return 0;
}