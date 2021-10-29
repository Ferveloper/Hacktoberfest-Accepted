// #include <stdio.h>
//By Value
// int main()
// {
//     int marks[5];
//     for (int i = 1; i <= 5; i++)
//     {
//         printf("Enter the marks of student %d : ", i);
//         scanf("%d", &marks[i - 1]);
//     }
//     for (int i = 1; i <= 5; i++)
//     {
//         printf("Marks of student %d : %d\n", i, marks[i - 1]);
//     }
//     return 0;
// }

// By Reference
#include <stdio.h>
int main()
{
    int marks[5];
    int *ptr_marks = &marks[0];
    for (int i = 1; i <= 5; i++){
        printf("Enter the marks of student %d:~>", i);
        scanf("%d", ptr_marks);
        ptr_marks++;
    }
    for (int i = 1; i <= 5; i++){
        printf("Marks of student 1 : %d\n", marks[i-1]);
    }
        return 0;
}