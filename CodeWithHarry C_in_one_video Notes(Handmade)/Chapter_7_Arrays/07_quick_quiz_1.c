// #include<stdio.h>
//BASIC METHOD:
// int main(){
//     int marks[5];
//     printf("\nEnter marks for student 1:~>");
//     scanf("%d", &marks[0]);
//     printf("\nEnter marks for student 2:~>");
//     scanf("%d", &marks[1]);
//     printf("\nEnter marks for student 3:~>");
//     scanf("%d", &marks[2]);
//     printf("\nEnter marks for student 4:~>");
//     scanf("%d", &marks[3]);
//     printf("\nEnter marks for student 5:~>");
//     scanf("%d", &marks[4]);
//     printf("\nMarks of student 1: %d", marks[0]);
//     printf("\nMarks of student 2: %d", marks[1]);
//     printf("\nMarks of student 3: %d", marks[2]);
//     printf("\nMarks of student 4: %d", marks[3]);
//     printf("\nMarks of student 5: %d", marks[4]);
//     return 0;
// }
#include <stdio.h>
//USING LOOPS:
int main()
{
    int marks[5];
    for (int i = 1; i <= 5; i++)
    {
        printf("Enter the marks of student %d : ", i);
        scanf("%d", &marks[i - 1]);
    }
    for (int i = 1; i <= 5; i++)
    {
        printf("Marks of student %d : %d\n", i, marks[i - 1]);
    }
    return 0;
}