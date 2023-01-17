#include <stdio.h>
void main()
{
    char str1[20],str2[20];
    int i,c=0,l;
    printf("Enter the string 1 and 2\n");
    gets(str1);
    gets(str2);
    i=0,l=0;
    while(str1[i]!='\0')
    {
        i++,l++;
    }
    i=0;
    while(str2[i]!='\0')
    {
        str1[l+i]=str2[i];i++;
    }
    str1[l+i]='\0';
    printf("String after concatenation %s",str1);
}
