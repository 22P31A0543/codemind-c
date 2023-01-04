#include<stdio.h>
int main()
{
    int p,c,b,n,com,per;
    
    scanf("%d%d%d%d%d",&p,&c,&b,&n,&com);
    per=(p+c+b+n+com)/5;
    if(per>=90)
    {
        
    printf("Grade A");
}
 
   else if(per>=80)
   {
      printf("Grade B");
}
   
   else if(per>=70)
   {
     printf("Grade C");
   }

   else if(per>=60)
   {
      printf("Grade D");
   }


   else if(per>=50)
      
      {
      printf("Grade F");
      }

   else
   {
        printf("No Grade");
   }
}



    
    