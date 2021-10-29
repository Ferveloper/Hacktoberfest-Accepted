#include<stdio.h>
#include<string.h>
struct student{
    int roll_no;
    char name[20];
    float weight;
};
int main(){
    struct student s1;
    struct student *ptr;
    s1.roll_no=1;
    strcpy(s1.name, "Apurv");
    s1.weight=72.4;
    ptr = &s1;
    // (*ptr).roll_no=1;
    ptr->roll_no=1;//ALTERNATE & EASY METHOD TO REPRESENT ABOVE LINE
    printf("%d", s1.roll_no);
    return 0;
}