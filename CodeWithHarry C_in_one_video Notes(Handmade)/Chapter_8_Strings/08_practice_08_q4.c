#include <stdio.h>
#include <string.h>
char apps_strcpy(char *to, char *from);
int main()
{
    char str_1[20] = "ABCDEFGHIJ";
    char str_2[20] = "0123456789";
    apps_strcpy(str_2, str_1);
    printf("%s", str_2);
    return 0;
}
char apps_strcpy(char *to, char *from)
{
    for(int i=0; i<(strlen(to)); i++){
        to[i] = from[i];
    }
}