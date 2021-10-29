#include <stdio.h>
int main()
{
    FILE *ptr;
    char fname[30];
    printf("Enter file name:~>");
    gets(fname);
    ptr = fopen(fname, "r"); //Opens file in reading mode
    (ptr == NULL) ? printf("File dosen't exist!") : printf("File Exists!");
    fclose(ptr);
    return 0;
}