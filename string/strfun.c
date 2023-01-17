#include <stdio.h>
#include <string.h>
void main()
{
    char str1[10];char str2[20];int a;
    printf("Enter string 1\n");
    gets(str1);
    //a=strlen(str1);
    //printf("Length of string 1 = %d\n",a);
    //printf("Enter string 2\n");
    //gets(str2);
    //To copy one string into another.
    //strcpy(str2,str1);
    //printf("%s\n",str2);
    //To append one string with another.
    //strcat(str2,str1);
    //printf("%s",str2);
    //To reverse a string.
    //strrev(str2);
    //printf("\n%s",str2);

    //Palindrome of string
    strcpy(str2,str1);
    char *strrev(str1);
    if(strcmp(str1,str2)==0)
    {
        printf("Palindrome");
    }
    else
        printf("Not palindrome");
}
