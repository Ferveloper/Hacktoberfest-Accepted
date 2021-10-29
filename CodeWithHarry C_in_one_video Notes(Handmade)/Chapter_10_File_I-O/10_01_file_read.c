#include<stdio.h>
int main(){
    FILE *ptr;
    ptr=fopen("sample_1", "r");//Opens file in reading mode
    int no;
    int no2;
    fscanf(ptr, "%d", &no);//Input file contents in "no" variable
    printf("Apps %d\n", no);
    fscanf(ptr, "%d", &no2);
    printf("Apps %d\n", no2);//Inputs contents after <SPACE> in text file
    fclose(ptr);
    return 0;
}