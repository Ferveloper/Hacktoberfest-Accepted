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
    struct student s[5];

    s[0].roll_no = 1;
    s[0].weight = 65.5;
    strcpy(s[0].name, "Harshad");

    s[1].roll_no = 2;
    s[1].weight = 42.5;
    strcpy(s[1].name, "Mannu");

    //Another  way to initialize structure variable
    struct student s3={3, 54.7, "Akhanda"};

    printf("STUDENT 3");
    printf("\nRoll No.: %d\n", s3.roll_no);
    printf("Weight: %f\n", s3.weight);
    printf("Name: %s\n", s3.name);
    //DOUBT!
    // struct student s4={0};//Initializes EVERY variable to 0

    // printf("After Zero-Initialization\n");
    // printf("STUDENT 3");
    // printf("Roll No.: %d\n", s3.roll_no);
    // printf("Weight: %f\n", s3.weight);
    // printf("Name: %s\n", s3.name);
    return 0;
}