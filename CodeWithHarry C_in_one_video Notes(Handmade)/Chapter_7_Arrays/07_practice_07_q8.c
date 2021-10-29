#include <stdio.h>
int table(int of, int till){
    int table[1][till];
    for (int i = 1; i <= till; i++)
    {
        table[0][i - 1] = of * i;
    }
    for (int i = 1; i <= till; i++)
    {
        printf("%d x %d = %d\n", of, i, table[0][i - 1]);
    }
}
int main()
{
    int table_of;
    int table_till;
    printf("Which Table?:~>");
    scanf("%d", &table_of);
    printf("Till What?:~>");
    scanf("%d", &table_till);
    table(table_of, table_till);
    return 0;
}