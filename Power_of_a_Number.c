#include<stdio.h>
#include<math.h>
void pn(int a,int b,int c)
{
    int p,e;
    p=pow(a,b);
    e=p%c;
    printf("%d",e);
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    pn(a,b,c);
}