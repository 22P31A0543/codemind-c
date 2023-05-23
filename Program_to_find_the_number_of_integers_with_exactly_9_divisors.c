#include<stdio.h>
int main()
{
    int n,cnt,i,j,r,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        cnt=0;
        for(j=1;j<=i;j++)
        {
            r=i%j;
            if(r==0)
            {
                cnt=cnt+1;
            }
        }
        if(cnt==9)
        {
            printf("%d ",i);
            c=c+1;
        }
    }
    printf("
");
    printf("Total=%d",c);
}