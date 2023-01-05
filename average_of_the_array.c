#include<stdio.h>
int main()
{
    int n,i;
    float c,x=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        x=x+a[i];
    }
    c=(x/n);
    printf("%.2f",c);
}