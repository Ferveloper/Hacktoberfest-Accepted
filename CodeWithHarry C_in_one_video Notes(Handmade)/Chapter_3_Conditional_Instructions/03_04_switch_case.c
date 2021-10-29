#include<stdio.h>
int main(){
    printf("Enter Rating (1-5):~>");
    int rate;
    scanf("%d", &rate);
    switch(rate){
        case 1:
        printf("You Rating is 1 \n");
        break;
        case 2:
        printf("You Rating is 2 \n");
        break;
        case 3:
        printf("You Rating is 3 \n");
        break;
        case 4:
        printf("You Rating is 4 \n");
        break;
        case 5:
        printf("You Rating is 5 \n");
        break;
        default:
        printf("Invalid Input. Try Again.");                        
    }
    return 0;
}