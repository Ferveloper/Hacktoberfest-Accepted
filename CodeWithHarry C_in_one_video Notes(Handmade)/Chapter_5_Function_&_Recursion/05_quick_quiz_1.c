#include<stdio.h>
void gm(){printf("Good Morning!\n");}
void ga(){printf("Good Afternoon!\n");}
void ge(){printf("Good Evening!\n");}
void gn(){printf("Good Night!\n");}
int main(){
    gm();
    ga();
    ge();
    gn();
    return 0;
}
//FUNCTION INSIDE FUNCTION(SAME OUTPUT)

// #include<stdio.h>
// void gm(){printf("Good Morning!\n");}
// void ga(){printf("Good Afternoon!\n");}
// void ge(){printf("Good Evening!\n");}
// void gn(){
//           gm();
//           ga();
//           ge();
//           printf("Good Night!\n");
//           }
// int main(){
//     // gm();
//     // ga();
//     // ge();
//     gn();
//     return 0;
// }