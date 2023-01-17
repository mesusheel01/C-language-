#include <stdio.h>
void main()
{
    int s, n, fact,j,sum=0,i,rem;
    printf("Enter the number to check if it is strong or not..\n");
    scanf("%d",&n);
    s=n;
    for(i=1;i<=n;i++)
    {
    while(s>0)
    {
        rem=s%10;fact=1;
        for(j=1;j<=rem;i++)
        {
            fact=fact*i;
        }
       sum=sum+fact;
     s=s/10;
    }printf("%d",sum);
    }
    if(sum==n)
    printf("The number is strong as its sum of factorial of each number is equal to number itself..");
    else
    printf("The number is not strong as its sum of factorial of each digit is not equal to number itself..");
}
