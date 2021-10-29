#include<stdio.h>
int main(){
    FILE *ptr;
    ptr=fopen("sample_4", "w");
    //fputc writes single character at a time to the input file
    fputc('A', ptr);
    fputc('P', ptr);
    fputc('P', ptr);
    fputc('S', ptr);
    fputc('9', ptr);
    fputc('8', ptr);
    fputc('7', ptr);
    return 0;
}