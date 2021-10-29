#include <stdio.h>
int main()
{
    int no_ = 5;
    printf("Enter a number:~>");
    scanf("%d", &no_);
    FILE *ptr;
    ptr = fopen("table.txt", "a");
    fprintf(ptr, "\n");
    fprintf(ptr, "TABLE OF %d\n\n", no_);
    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr, "%d x %d = %d\n", no_, i, no_ * i);
    }
    printf("Table has been successfully logged.");
    return 0;
}