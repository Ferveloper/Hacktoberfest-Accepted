#include <stdio.h>
//PROOF OF MEMORY ALLOCATION OF DATA-TYPES
//MEMORY ALLOCATION FOR DATA-TYPES VARIES AS PER ARCHITECTURE!
int main()
{
    int no_[] = {1, 2};
    printf("\nINTEGER\n\n");
    printf("Value : %d \nAddress : %u", no_[0], &no_[0]);
    printf("\n\nValue : %d \nAddress : %u", no_[1], &no_[1]);
    
    float fl_[] = {1.2, 2.3};
    printf("\n\nFLOAT");
    printf("\n\nValue : %.2f \nAddress : %u", fl_[0], &fl_[0]);
    printf("\n\nValue : %.2f \nAddress : %u", fl_[1], &fl_[1]);

    char abet_[] = {'a', 'b'};
    printf("\n\nCHARACTER");
    printf("\n\nValue : %c \nAddress : %u", abet_[0], &abet_[0]);
    printf("\n\nValue : %c \nAddress : %u", abet_[1], &abet_[1]);
    return 0;
}