#include <stdio.h>
#include <string.h>
typedef struct student
{
    int roll_no;
    char name[20];
    float weight;
} st;

void show(st sn)
{
    printf("Name: %s\n", sn.name);
    printf("Roll No.: %d\n", sn.roll_no);
    printf("Weight: %.2f\n", sn.weight);
}

int main()
{
    st s1;
    s1.roll_no = 1;
    s1.weight = 72.4;
    strcpy(s1.name, "Apurv");
    show(s1);
    return 0;
}