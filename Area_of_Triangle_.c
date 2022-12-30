#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float d,e;
    scanf("%d%d%d",&a,&b,&c);
    d=(a+b+c)/2.0;
    e=sqrt(d*(d-a)*(d-b)*(d-c));
    printf("%.2f",e);
}
