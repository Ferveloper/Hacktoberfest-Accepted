#include<stdio.h>
#include<string.h>
int apps_occurence_check(char *arr, char c);
int main(){
    char str[50]="ashbshaaduhwkasjsx";
    printf("%d", apps_occurence_check(str, 'd'));
    return 0;
}
//Returns 1 when character is present, Returns 0 when character is absent.
int apps_occurence_check(char *arr, char c){
    int i=0;
    int count=0;
    while(i<strlen(arr)){
        if (arr[i]==c) return 1;
        i++;
    }
    return 0;
}