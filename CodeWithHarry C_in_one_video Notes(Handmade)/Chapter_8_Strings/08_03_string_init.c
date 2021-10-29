#include <stdio.h>
int main()
{
    char *apps = "A P P S"; //RE-INITIALIZATION OF ARRAY CAN BE DONE.
    // char apps[]="A P P S";//RE-INITIALIZATION OF ARRAY CANNOT BE DONE.
    apps = "A B C D";
    printf("%s", apps);
}