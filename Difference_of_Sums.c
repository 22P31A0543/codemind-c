#include<stdio.h>
int main()
{
    int n,q,s=0,z=0,i,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        z=z+i;
        q=i*i;
        s=q+s;
    }
    d=(z*z)-s;
    printf("%d",d);
}