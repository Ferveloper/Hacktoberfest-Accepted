//Arithmatic Table Maker
#include <stdio.h>
int main()
{
    int a = 1;
    int table_of;
    int table_upto;
    printf("Specify Table No.:~>");
    scanf("%d", &table_of);
    printf("Specify Table Length(Till):~>");
    scanf("%d", &table_upto);
    while (a <= table_upto)
    {
        printf("%d x %d = %d\n", table_of, a, table_of * a);
        a++;
    }
    return 0;
}