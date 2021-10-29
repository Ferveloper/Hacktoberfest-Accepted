//Sum of 0 to n numbers.
#include<stdio.h>
int sum_n(int n);
int main(){
    int n;
    printf("Enter a Number:~>");
    scanf("%d", &n);
    printf("Sum of 0 to %d is %d", n, sum_n(n));
    return 0;
}
int sum_n(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n+sum_n(n-1);
    }
}