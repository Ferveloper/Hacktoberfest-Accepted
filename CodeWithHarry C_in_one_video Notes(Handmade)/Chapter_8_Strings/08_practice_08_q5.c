#include<stdio.h>
void apps_enc(char *ar);
int main(){
    char as[30]="APPS";
    apps_enc(as);
    printf("%s", as);
    return 0;
}
void apps_enc(char *ar){
    int i=0;
    char *ptr=ar;
    while(*ptr!='\0'){
        *ptr=*ptr+1;
        ptr++;
    }
}