#include <stdio.h>
#include <string.h>
int main()
{
    // char *str_1="ABCD";//NOT APPLICABLE
    // char *str_2="EFGH";//NOT APPLICABLE
    char str_1[] = "ckksdjc";
    char str_2[] = "fncwe";
    int compare = strcmp(str_1, str_2);//"strcmp()" returns INT value
    printf("%d", compare);
    return 0;
}