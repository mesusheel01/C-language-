#include <stdio.h>
#include <math.h>
void main()
{
     int n, sum=0,a,s;
    printf("Enter a three digit number to check if it is Armstrong number or not\n");
    scanf("%d",&n);
    s=n;
    while(n>0)
    {
        a=n%10;
        sum=sum+a*a*a;
        n=n/10;
    }
    if(sum==s)
    printf("The entered number is Armstrong as the sum of cube of each digit\n\tof this number is equal to number itself.\n");
    else
    printf("The entered number is not an Armstrong as the sum of cube of each\n15\tdigit of this number is not equal to number itself.\n");
}