#include<stdio.h>
#include<string.h>
typedef struct student{
    int roll_no;
    float weight;
    char name[20];
}st;
int main(){
    st s1;
    st *ptr=&s1;
    // (*ptr).roll_no=1;
    ptr->roll_no=1;
    ptr->weight=65.7;
    strcpy(ptr->name, "Harshad");
    printf("Roll No.: %d\n", s1.roll_no);
    printf("Name: %s\n", s1.name);
    printf("Weight: %.2f\n", s1.weight);
    return 0;
}