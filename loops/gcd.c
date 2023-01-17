#include <stdio.h>
void main()
{
    int i,s=0,m,k=0,c=0,n;
    printf("Enter the values of m and n\n");
    scanf("%d%d",&m,&n);
    for(i=1;i<=m*n;i++)
    {
        if(m%i==0 && n%i==0)
        {
            s=i;
        }
    }
        printf("The gcd of %d and %d is %d ",m,n,s);
        for(i=m*n;i>0;i--)
        {
            if(m%i==0 && n%i==0)
            {
                c++;
                k=i;

            }
        }
        if(c>0)
        printf("The lcm of %d and %d is %d \n",m,n,k);
        else
            printf("The lcm of %d and %d is 1",m,n);
}
