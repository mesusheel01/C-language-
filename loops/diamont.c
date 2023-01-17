#include <stdio.h>

int main() 
{
    int i,j,k,m;
    for(i=1;i<=5;i++)
    {
       for(j=5;j>i;j--)
        {printf(" ");}
        for(k=1;k<=i;k++)
        {printf("*");}
      
        for(m=2;m<=i;m++)
        printf("*");
      printf("\n");
        
    }
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        printf(" ");
        for(k=1;k<=5-i;k++)
        printf("*");
        for(m=4;m>i;m--)
        printf("*");
        printf("\n");
    }
    return 0;
}