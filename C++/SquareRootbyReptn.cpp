# include<stdio.h>

void main()
{
int t,n,i=0,j,count;
scanf("%d", &t);
while(i<t){
    scanf("%d", &n);
    count=0;
    for (j=1;j<=n;j=j+2){
        n=n-j;
        count++;
    }
    printf("%d\n", count);
    i++;
}
}