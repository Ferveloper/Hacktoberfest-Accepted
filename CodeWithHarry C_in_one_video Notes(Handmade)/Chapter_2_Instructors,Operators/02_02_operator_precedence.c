#include<stdio.h>
#include<unistd.h>
int main(){
//NO BODMAS IN C!
/* 
PRIORITIES:->
            1st priority : *, /, %
            2nd priority : +, -
            3rd priority : =
*/
    int a=2;
    int b=4;
    printf("Result of  2a+5b is %d\n", 2*a+5*b);//Case 1
    printf("Result of 2(a+5)b is %d\n", 2*(a+5)*b);//Case 2
//ASSOCIATIVITY ( FROM LEFT TO RIGHT ------>)
    printf("\n");
    printf("CASE 1:~>   4*4/2*2 = %d ----> Wrong Answer\n", 4*4/2*2);//CASE 1
    printf("CASE 2:~> (4*4)/(2*2) = %d ---> Right Answer", (4*4)/(2*2));//CASE 2
//INCREMENT OPERATOR
//If a is a varible then a++ is similar to a=a+1
    int w=1;
    printf("\n\nResult of w++ : %d", w++);//Prints Value of a THEN Increments its Value.
    printf("\nResult of ++w : %d", ++w);//Increments Value of a THEN Prints it.
//If a is a varible then a-- is similar to a=a-1
    int x=1;
    printf("\n\nResult of x-- : %d", x--);//Prints Value of a THEN Increments its Value.
    printf("\nResult of --x : %d", --x);//Increments Value of a THEN Prints it.
//If a is a varible then a+=10 increments value by 10
    int y=1;
    printf("\n\nResult of y+=9 : %d", y+=9);
    int z=-1;
    printf("\n\nResult of z-=9 : %d", z-=9);
    sleep(30);
    return 0;
}