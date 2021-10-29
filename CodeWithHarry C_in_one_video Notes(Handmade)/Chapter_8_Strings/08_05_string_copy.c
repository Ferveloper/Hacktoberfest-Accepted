#include <stdio.h>
#include <string.h> // "strcpy() is included in this header file"
int main()
{
    char str_1[] = "APPS";
    char str_2[] = "ABCD";
    printf("BEFORE COPY\n");
    printf("String 1 : %s\n", str_1);
    printf("String 2 : %s\n", str_2);
    strcpy(str_2, str_1); //COPIES STRINGS FROM str_1 TO str_2
    printf("AFTER COPY\n");
    printf("String 1 : %s\n", str_1);
    printf("String 2 : %s", str_2);
    return 0;
}