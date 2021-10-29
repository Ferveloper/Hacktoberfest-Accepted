#include <stdio.h>
#include <string.h>
struct student
{
    int roll_no;
    float weight;
    char name[20];
};
int main()
{
    struct student s1;
    s1.roll_no = 1;
    s1.weight = 65.5;
    //s1.name = "Harshad";//DOSEN'T WORK!
    strcpy(s1.name, "Harshad");
    return 0;
}