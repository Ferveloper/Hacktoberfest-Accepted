#include<stdio.h>
void address(int i);
int main(){
    int i=10;
    printf("Address of i from   \"main()\"  function : %u", &i);
    address(i);
    return 0;
}
void address(int i){
    printf("\nAddress of i from \"address()\" function : %u", &i);
}
//Reason for different values: The "i" in variable() is a COPY of the "i" in main().