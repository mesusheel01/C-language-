#include <stdio.h>
void main()
{
   int n,i,y=0,x;
   printf("Enter the value of x\n");
   scanf("%d",&x);
   while(x>0)
   {
       y=(y*10)+(x%10);
       x=x/10;
   }
printf("%d",y);}
