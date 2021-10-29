// #include<stdio.h>
// int main(){
//     FILE *ptr;
//     ptr=fopen("psample_1", "r");
//     for(int i=0; i<3; i++){
//         printf("%c", fgetc(ptr));
//     }
//     return 0;
// }
#include<stdio.h>
int main(){
    FILE *ptr;
    ptr=fopen("sample_6", "r");
    int a, b, c;
    fscanf(ptr, "%d %d %d", &a, &b, &c);
    printf("%d %d %d", a, b, c);
    return 0;
}