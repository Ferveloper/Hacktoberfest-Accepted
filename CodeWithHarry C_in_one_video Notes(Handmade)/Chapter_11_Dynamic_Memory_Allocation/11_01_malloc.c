#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int no_int = 5; //Number of integers user wants.
    //"malloc()" returns VOID value, so need to typecast everytime for perticular data-type.
    //"malloc() RETURNS "NULL" POINTER IN CASE OF ANY ERRORS CAUSED!
    ptr = (int *)malloc(no_int * 4);           //NOT THE BEST WAY!(DO NOT HARDCODE ANY MEMORY ALLOCATION OF DATA-TYPE)
    ptr = (int *)malloc(no_int * sizeof(int)); //PROPER WAY!(HOLDING THE VALUE OF 5 INTEGERS)

    for (int i = 0; i < no_int; i++){
        printf("Value for ptr[%d]:~>", i);
        scanf("%d", &ptr[i]);
    }
    printf("\n");
    for (int j = 0; j < no_int; j++){
        printf("ptr[%d]: %d\n", j, ptr[j]);
    }
        return 0;
}