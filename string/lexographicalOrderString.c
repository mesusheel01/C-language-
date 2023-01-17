/*#include <stdio.h>
#include <string.h>
int main()
{
    char name[10][10],temp[10];
    int i,p,s,n;
    printf("Enter no of names\n");
    scanf("%d",&n);
    printf("Enter no of names\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",name[i]);
    }
    for(p=0;p<n-1;p++)
    {
        for(s=0;s<p-n-1;p++)
        {
            if(strcmp(name[s],name[s+1])<0)
            {
                strcpy(temp,name[s]);
                strcpy(name[s],name[s+1]);
                strcpy(name[s+1],temp);
            }
        }
    }
    for(s=0;s<n;s++)
    {
        puts(name[s]);
    }
    return 0;
}*/
#include<stdio.h>
#include<string.h>
int main()
{
   char str[10][50],temp[50];
   int n,i,j;
printf("Enter the number of name to arrange\n");
scanf("%d",&n);
   printf("Enter 10 Words:\n");

   for(i=0;i<10;i++)
   scanf("%s[^\n]",str[i]);

   for(i=0;i<n-1;i++)
   {
     for(j=i+1;j<n;j++)
     {
       if(strcmp(str[i],str[j])>0)
       {
         strcpy(temp,str[i]);
         strcpy(str[i],str[j]);
         strcpy(str[j],temp);
       }
     }
   }
   printf("\nIn lexicographical order: \n");

   for(i=0;i<n;i++)
   puts(str[i]);

   return 0;
}
