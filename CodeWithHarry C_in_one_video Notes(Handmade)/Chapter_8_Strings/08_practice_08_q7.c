#include<stdio.h>
#include<string.h>
int apps_occurence(char *arr, char c);
int main(){
    char str[50]="ashbshaaduhwkasjsx";
    printf("%d", apps_occurence(str, 'a'));
    return 0;
}
int apps_occurence(char *arr, char c){
    int i=0;
    int count=0;
    while(i<strlen(arr)){
        if (arr[i]==c) count++;
        i++;
    }
    return count;
}