#include<stdio.h>
struct student{
    int roll_no;
    float weight;
    char name[20];
};
int main(){
    struct student s1, s2, s3;
    printf("Enter value for roll no. of student 1 :~> ");
    scanf("%d", &s1.roll_no);
    fflush(stdin);
    printf("Enter value for weight of student 1 :~>");
    scanf("%d", &s1.weight);
    fflush(stdin);
    printf("Enter name of student 1:~>");
    scanf("%s", &s1.name);
    fflush(stdin);
    printf("Enter value for roll no. of student 2 :~> ");
    scanf("%d", &s2.roll_no);
    fflush(stdin);
    printf("Enter value for weight of student 2 :~>");
    scanf("%d", &s2.weight);
    fflush(stdin);
    printf("Enter name of student 2:~>");
    scanf("%s", &s2.name);
    fflush(stdin);
    printf("Enter value for roll no. of student 3 :~> ");
    scanf("%d", &s3.roll_no);
    fflush(stdin);
    printf("Enter value for weight of student 3 :~>");
    scanf("%d", &s3.weight);
    fflush(stdin);
    printf("Enter name of student 3:~>");
    scanf("%s", &s3.name);
    fflush(stdin);
    return 0;
}