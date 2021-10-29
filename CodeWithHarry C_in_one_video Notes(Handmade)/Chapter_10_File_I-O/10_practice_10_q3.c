#include <stdio.h>
int main()
{
    FILE *ptr, *ptr2;
    ptr = fopen("sample_6", "r");
    ptr2 = fopen("sample_6_a", "a");
    char c = fgetc(ptr);
    while (c != EOF)
    {
        fputc(c, ptr2);
        fputc(c, ptr2);
        c = fgetc(ptr);
    }
    return 0;
}