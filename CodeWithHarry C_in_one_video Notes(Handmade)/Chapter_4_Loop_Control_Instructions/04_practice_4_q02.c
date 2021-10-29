//Arithmatic Reverse Table Maker
#include <stdio.h>
int main()
{
    int table_of;
    int table_upto;
    printf("Specify Table No.:~>");
    scanf("%d", &table_of);
    printf("Specify Table Length(Till):~>");
    scanf("%d", &table_upto);
    while (table_upto <= 1 /*<--Limit*/ && table_upto > 0 /*<--No Negative Values*/)
    {
        printf("%d x %d = %d\n", table_of, table_upto, table_upto * table_of);
        table_upto--;
    }
    return 0;
}