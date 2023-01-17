#include <stdio.h>
void main()
{
    char str1[100],str2[100];int c=0,l,i;
    printf("Enter the string 1 and 2\n");
    gets(str1);
    gets(str2);
    i=0,l=0;
    while(str1[i]!='\0')
    {
        i++,l++;
    }
    i=0;
    while(str1[i]!='\0')
    {
        str2[l-i-1]=str1[i];i++;
    }
    str2[i]='\0';
        for(i=0;i<=l;i++)
        {
            if(str1[i]==str2[i])
        {
            c++;
        }
        else
           c=0;
        }
        if(c>0)
            printf("The string is palindrome\n");
        else
            printf("The string is not palindrome");
}
