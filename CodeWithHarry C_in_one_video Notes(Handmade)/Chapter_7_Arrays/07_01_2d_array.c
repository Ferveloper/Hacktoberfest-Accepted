#include<stdio.h>
int main(){
    int student=3;
    int subjects=5;
    int marks[student][subjects];
    for(int i=1;i<=student;i++){
        for(int j=1;j<=subject;j++){
            printf("Enter marks of student %d for subject %d : ", i, j);
            scanf("%d", &marks[i-1][j-1]);
        }
    }
    for(int i=1;i<=student;i++){
        for(int j=1;j<=subjects;j++){
            printf("Marks of student %d for subject %d : %d\n", i, j, marks[i-1][j-1]);
        }
    }
    return 0;
}