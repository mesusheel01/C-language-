#include <stdio.h>
void main()
{
    int a,b,c,n,rev,s;
    printf("Enter the number to check if it is palindrome or not\n");
    scanf("%d",&n);
    s=n;
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n%10;
    rev=a*100+b*10+c;
    if(rev==s)
    printf("The entered number after changing is %d and it is palindrome number ",rev);
    else
    printf("The entered number is not palindrome.");
}
