#include<stdio.h>
void count(int a,int b,int d)
{
    int i,c=0;
    for(i=a;i<=b;i++)
    {
        if(i%d==0)
        {
            c++;
        }
    }
    printf("%d",c);
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    count(a,b,c);
}