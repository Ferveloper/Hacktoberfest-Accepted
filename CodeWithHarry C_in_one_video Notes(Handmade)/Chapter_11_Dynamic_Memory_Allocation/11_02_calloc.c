#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int no_int = 5; //Number of integers user wants.
    //"calloc()" sets value of every assigned data-type to 0
    //"calloc() RETURNS "NULL" POINTER IN CASE OF ANY ERRORS CAUSED!
    ptr = (int *)calloc(no_int, 4);
    ptr = (int *)calloc(no_int, sizeof(int));
    /*TRY COMMENTING BELOW CODE AND SEE THE OUTPUT TO SEE THR EFFECT*/
    // for (int i = 0; i < no_int; i++){
    //     printf("Value for ptr[%d]:~>", i);
    //     scanf("%d", &ptr[i]);
    // }
    /****************************************************************/
    printf("\n");
    for (int j = 0; j < no_int; j++){
        printf("ptr[%d]: %d\n", j, ptr[j]);
    }
        return 0;
}