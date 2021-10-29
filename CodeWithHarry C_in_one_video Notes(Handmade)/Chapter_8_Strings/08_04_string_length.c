#include <stdio.h>
#include <string.h> // "strlen() is included in this header file"
char apps_strlen(char *str);
int main()
{
    char *apps = "A P P S";
    printf("%s", apps);
    printf("\nLength : %d", strlen(apps));//STOCK FUNCTION
    printf("\nLength : %d", apps_strlen(apps));//FUNCTION MADE BY ME.LOL
    return 0;
}

char apps_strlen(char *str)
{
    int i = 0;
    while (*str != '\0')
    {
        *str++;
        i++;
    }
    return i;
}