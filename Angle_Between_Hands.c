#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,h,m,a;
    scanf("%f:%f",&x,&y);
    h=30*x+0.5*y;
    m=6*y;
    a=abs(h-m);
    if(a>180)
    {
        a=360-a;
    }
    printf("%0.1f",a);
}