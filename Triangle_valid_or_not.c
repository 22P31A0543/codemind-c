#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a)
    {
        printf("Valid triangle");
    }
    else
    {
        printf("Invalid triangle");
    }
}