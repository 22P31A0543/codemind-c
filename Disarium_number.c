#include<stdio.h>
#include<math.h>
int main()
{
    int n,t,sum=0,c=0;
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
    t=t/10;
    c=c+1;
    }
t=n;
while(c!=0){
    int rem=t%10;
    t=t/10;
    sum=sum+pow(rem,c);
    c=c-1;
}
if(sum==n){
    printf("True");
}else{
    printf("False");
}
 
}