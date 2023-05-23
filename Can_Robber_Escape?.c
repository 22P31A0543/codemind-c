#include<stdio.h>
int main()
{
    int a[100],n,o=0,e=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            o+=1;
        }
    }
    if(o<=2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}