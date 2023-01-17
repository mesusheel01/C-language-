#include <stdio.h>
struct std
{
    int r;
    char name[10];
    float m;
}s[5];
void main()
{
   int i;
   printf("Enter the details of student\n");
   for(i=0;i<5;i++)
   {
       scanf("%d%s%f",&s[i].r,&s[i].name,&s[i].m);
   }
    for(i=0;i<5;i++)
   {
       printf("roll no =%d\n name= %s \nmarks = %f",s[i].r,s[i].name,s[i].m);
   }
}

