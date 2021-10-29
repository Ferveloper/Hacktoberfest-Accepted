#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("sample_5", "r");
    char c = fgetc(ptr);
    while (c != EOF)//EOF = End Of File
    {
        printf("%c", c);
        c = fgetc(ptr);
    }
    return 0;
}