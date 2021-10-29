#include <stdio.h>
int main()
{
    // str_1 is same as str_2.
    char str_1[] = {'A', 'B', 'C', 'D', '_', '1', '\0'};
    char str_2[] = "ABCD_2";
    char *str_3   = "ABCD_3";
    //METHOD 1 TO PRINT STRING
    // char *ptr = str_2;
    // while (*ptr != '\0')
    // {
    //     printf("%c", *ptr);
    //     *ptr++;
    // }
    //METHOD 2 TO PRINT STRING
    printf("%s", str_3);

    return 0;
}