#include <stdio.h>
void main()
{
    char str1[200],str2[200],str3[200];int l=0,i=0;
    printf("Enter the string 1\n");
    gets(str1);
    printf("Enter the string 2\n");
    gets(str2);
    printf("Enter the thrid string\n");
    gets(str3);
    while(str1[i]!='\0')
    {
    l++;   i++;
    }
    printf("The length of string 1 is %d \n",l);
    i=0;
    while(str1[i]!='\0')
    {
        str2[l-i-1]=str1[i];
        i++;
    }
    str2[i]='\0';
    printf("The string one after reversing is %s ",str2);
    i=0;
    while (str1[i]!='\0')
    {
        str2[i]=str1[i];
        i++;
    }str2[i]='\0';
    printf("\nThe string 2 after copying str1 into it is %s \n",str2);
    i=0;
    while(str3[i]!='\0')
    {
        str1[l+i]=str3[i];

        i++;
    }
    str1[l+i]='\0';
    printf("The string 1 with string 2 after concatenation is %s ",str1);
}
