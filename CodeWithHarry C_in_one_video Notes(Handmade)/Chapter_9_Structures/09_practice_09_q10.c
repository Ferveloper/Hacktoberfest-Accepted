#include <stdio.h>
typedef struct apps_time
{
    int h;
    int m;
    int s;
} time;
int comp_time(time t1, time t2);
int display(time t1, time t2);
int main()
{
    time t1 = {12, 10, 24};
    time t2 = {1, 30, 37};
    display(t1, t2);
    printf("Result: %d", comp_time(t1, t2));
    return 0;
}
int comp_time(time t1, time t2)
{ //-1:time 1 < time 2, 0:time 1 = time 2, 1:time 1> time 2
    if (t1.h > t2.h)
    {
        return 1;
    }
    else if (t1.h < t2.h)
    {
        return -1;
    }
    else if (t1.m > t2.m)
    {
        return 1;
    }
    else if (t1.m < t2.m)
    {
        return -1;
    }
    else if (t1.s > t2.s)
    {
        return 1;
    }
    else if (t1.s < t2.s)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int display(time t1, time t2)
{
    printf("%d:%d:%d\n", t1.h, t1.m, t1.s);
    printf("%d:%d:%d\n", t2.h, t2.m, t2.s);
}