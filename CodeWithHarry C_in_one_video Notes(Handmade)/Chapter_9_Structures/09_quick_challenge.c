#include<stdio.h>
typedef struct apps_date{
    int d;
    int m;
    int y;
}date;
typedef struct apps_time
{
    int h;
    int m;
    int s;
} time;
int compare(date d1, date d2, time t1, time t2);
int display(date d1, date d2, time t1, time t2);
int main(){
    date d1={15, 10, 2020};
    date d2={15, 10, 2002};
    time t1 = {12, 10, 22};
    time t2 = {12, 10, 22};
    display(d1, d2, t1, t2);
    printf("Result: %d", compare(d1, d2, t1, t2));
    return 0;
}
int compare(date d1, date d2, time t1, time t2){//-1:Date 1 < Date 2, 0:Date 1 = Date 2, 1:Date 1> Date 2
    if(d1.y>d2.y){
        return 1;
    }
    else if(d1.y<d2.y){
        return -1;
    }
    else if(d1.m>d2.m){
        return 1;
    }
    else if(d1.m<d2.m){
        return -1;
    }
    else if(d1.d>d2.d){
        return 1;
    }
    else if(d1.d<d2.d){
        return -1;
    }
    else if (t1.h > t2.h)
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
    else{
        return 0;
    }
}

int display(date d1, date d2, time t1, time t2){
    printf("[%d-%d-%d\t%d:%d:%d]\n", d1.y, d1.m, d1.d, t1.h, t1.m, t1.s);
    printf("[%d-%d-%d\t%d:%d:%d]\n", d2.y, d2.m, d2.d, t2.h, t2.m, t2.s);
}