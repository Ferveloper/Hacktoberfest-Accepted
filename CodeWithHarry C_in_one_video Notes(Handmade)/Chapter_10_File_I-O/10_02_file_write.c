#include<stdio.h>
int main(){
    FILE *ptr;
    ptr=fopen("sample_2", "w");
    fprintf(ptr, "Name: Apurv Vyavahare\nAge: 18\nHeight: 180 cm\nWeight: 88 KG");
    return 0;
}