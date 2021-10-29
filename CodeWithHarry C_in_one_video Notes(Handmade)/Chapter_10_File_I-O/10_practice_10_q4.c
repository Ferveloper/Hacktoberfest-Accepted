#include <stdio.h>
int main()
{
    char name[20];
    float salary;
    FILE *ptr;
    ptr = fopen("sample_7", "a");
    int i = 0;
    int no_emp;
    printf("No. of employers to record the data:~>");
    scanf("%d", &no_emp);
    while (i < no_emp)
    {
        printf("Enter Name:~>");
        scanf("%s", &name);
        printf("Enter Salary:~>");
        scanf("%f", &salary);
        fprintf(ptr, "%s, %f\n", name, salary);
        i++;
    }
    return 0;
}