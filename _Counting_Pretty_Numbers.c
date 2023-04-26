#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int l,r,c=0,j;
        scanf("%d%d",&l,&r);
        for(j=l;j<=r;j++)
        {
            if(j%10==2 || j%10==3 || j%10==9)
            c++;
        }
        printf("%d
",c);
    }
}