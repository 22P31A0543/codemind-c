#include<stdio.h>
int main()
{
    float a,b,c,d;
    scanf("%f",&a);
    if(a<=10000)
    {
        b=a*(20/100.00);
        c=a*(80/100.00);
        d=a+b+c;
        printf("%.2f",d);
    }
    else if(a<=20000)
    {
       b=a*(25/100.00);
       c=a*(90/100.00);
        d=a+b+c;
        printf("%.2f",d); 
    }
    else if(a>20000)
    {
        b=a*(30/100.00);
        c=a*(95/100.00);
        d=a+b+c;
        printf("%.2f",d);
    }
    else
    {
        printf("%.2f",d);
    }
}