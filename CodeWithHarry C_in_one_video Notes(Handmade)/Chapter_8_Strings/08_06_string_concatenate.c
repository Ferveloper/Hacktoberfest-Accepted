#include <stdio.h>
#include <string.h>
int main()
{
    // char *str_1="ABCD";//NOT APPLICABLE
    // char *str_2="EFGH";//NOT APPLICABLE
    char str_1[] = "ABCD";
    char str_2[] = "EFGH";
    strcat(str_1, str_2);
    printf("%s", str_1);
    return 0;
}