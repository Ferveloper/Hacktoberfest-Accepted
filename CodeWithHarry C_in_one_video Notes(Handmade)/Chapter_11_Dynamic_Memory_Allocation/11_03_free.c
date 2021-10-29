#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
    int *ptr;
    /*Try commenting line 13 to see the effect without "free()"*/
    /*See the process of this program in task manager to see the memory allocation*/
    while (1)
    {
        sleep(3);
        ptr = (int *)calloc(1000, 10000);
        printf("Assigned Trash Memory\n");
        free(ptr);printf("Memory Released\n");
    }
    return 0;
}