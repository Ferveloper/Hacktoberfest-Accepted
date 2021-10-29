#include<stdio.h>
typedef struct apps_date{
    int d;
    int m;
    int y;
}date;
int comp_date(date d1, date d2);
int display(date d1, date d2);
int main(){
    date d1={16, 10, 2002};
    date d2={15, 10, 2002};
    display(d1, d2);
    printf("Result: %d", comp_date(d1, d2));
    return 0;
}
int comp_date(date d1, date d2){//-1:Date 1 < Date 2, 0:Date 1 = Date 2, 1:Date 1> Date 2
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
    else{
        return 0;
    }
}

int display(date d1, date d2){
    printf("%d/%d/%d\n", d1.d, d1.m, d1.y);
    printf("%d/%d/%d\n", d2.d, d2.m, d2.y);
}