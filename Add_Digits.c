#include<stdio.h>
void add(int n)
{
    if(n%9==0)
    
        {
            printf("%d",n);
        }
        else
        {
            printf("%d",n%9);
        }
    }
    int main()
    {
    int n;
    scanf("%d",&n);
    add(n);
}