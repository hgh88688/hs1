#include<stdio.h>
int main()
{
    int x,y;
    printf("enter:");
    scanf("%d",&x);
    if(x<1)
    {
    y=x;
    }
    else if(1<=x&&x<10)
    {
        y=2*x-1;
    }
    else
    {
        y=3*x-11;
    }
    printf("y=%d",y);
}
