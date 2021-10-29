#include <stdio.h>
int main()
{
    //OUTPUTS ONLY SINGLE WORD.(NOTHING AFTER A <SPACE>)
    // char str[50];
    // printf("Enter String:~>");
    // scanf("%s", str);
    // printf("String : %s", str);

    //OUTPUTS A STATEMENT.
    char str[50];
    printf("Enter String:~>");
    // scanf("%s", str);
    gets(str);
    //printf("String : %s", str);
    puts(str);
    return 0;
}