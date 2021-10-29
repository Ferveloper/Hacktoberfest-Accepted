#include<stdio.h>
#include<unistd.h>
int main(){
    printf("Enter a no.:~>");
    int a;
    scanf("%d", &a);
    if(a%2==0){//IF Condition
        printf("\nThe no. is even.");
    }
    else{// ELSE Condition
        printf("\nThe no. is odd.");
    }
    sleep(30);
    return 0;
}