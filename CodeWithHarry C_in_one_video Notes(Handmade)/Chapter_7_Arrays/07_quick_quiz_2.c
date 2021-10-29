// //Addition of a number to pointer
// #include <stdio.h>
// int main()
// {
//     int a[] = {10, 22, 34};
//     int *b = &a[0];
//     printf("\n Value  of a[0] : %d\nAddress of a[0] : %u\n", *b, b);
//     b++; //b++ is equal to b+=1, Try b+=2
//     printf("\nPointer Increment Applied!\n");
//     printf("\n Value  of a[0] : %d\nAddress of a[0] : %u", *b, b);
//     return 0;
// }

// //Subtraction of a number from pointer
// #include <stdio.h>
// int main()
// {
//     int a[] = {10, 22, 34};
//     int *b = &a[2];
//     printf("\n Value  of a[2] : %d\nAddress of a[2] : %u\n", *b, b);
//     b--; //b++ is equal to b-=1, Try b-=2
//     printf("\nPointer Decrement Applied!\n");
//     printf("\n Value  of a[2] : %d\nAddress of a[2] : %u", *b, b);
//     return 0;
// }

// //Comparison of two pointers
// #include<stdio.h>
// int main(){
//     int num[2]={1, 2};
//     printf("(&num[1]) - (&num[0]) = %d", (&num[1]) - (&num[0]));
//     return 0;
// }

// // Comparison of two pointers
// #include<stdio.h>
// int main(){
//     int num[2]={1, 2};
//     int *ptr_1=&num[0];
//     int *ptr_2=&num[1];
//     printf("ptr_1 = %u\nptr_2 = %u", ptr_1,ptr_2);
//     printf("\nComparison : Difference of %d bytes.\nReason : Size of integer in x86 architecture is 4 bytes.", (int)ptr_2-(int)ptr_1);
//     return 0;
// }
