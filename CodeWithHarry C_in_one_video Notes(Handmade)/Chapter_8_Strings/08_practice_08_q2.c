#include<stdio.h>
char apps_strlen(char *n){
    int i=0;
    while(*n!='\0'){
        i++;
        n++;
    }
    return i;
}
int main(){
    char str[]="apps";
    printf("Length of string : %d", apps_strlen(str));
    return 0;
}