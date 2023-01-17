#include <stdio.h>
void main()
{
    int n,a,s,rev=0;
    printf("Enter a number to check if it is palindrome or not\n");
    scanf("%d",&n);
    s=n;
    while(n>0)
    {
        a=n%10;
        rev=rev*10+a;
        n=n/10;
    }
    if(rev==s)
    printf("The entered number %d is palindrome ",s);
else 
printf("The entered number %d is not palindrome ",s);
}