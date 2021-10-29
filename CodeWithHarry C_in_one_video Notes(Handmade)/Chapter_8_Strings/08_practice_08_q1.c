#include <stdio.h>
#include <string.h>
int str_per_c(char *n)
{
    int i = 0;
    char c = 'a';
    while (c != '\n')
    {
        printf("Enter Character(Only Enter When Finished):~>");
        fflush(stdin);
        scanf("%c", &c);
        n[i] = c;
        i++;
    }
    n[i-1] = '\0';
}
int main()
{
    char str_1[50];
    char str_2[50];
    str_per_c(str_1);
    printf("Enter a string:~>");
    scanf("%s", str_2);
    printf("String by %%c : %s\n", str_1);
    printf("String by %%s : %s\n", str_2);
    int compare = strcmp(str_1, str_2);
    printf("Comparison Result : %d", compare);
    return 0;
}