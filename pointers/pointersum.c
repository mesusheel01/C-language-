#include <stdio.h>
void main()
{
    int *p,ar[10];
    int i,n,sum=0;
    p=&ar[0];
    printf("Enter the no of element of the array\n");
    scanf("%d",&n);
    printf("Enter the the elements\n");
    for(i=0;i<n;i++)
    scanf("%d",(p+i));
    for(i=0;i<n;i++)
    {
        sum=sum+*(p+i);
    }
    printf("The sum is %d\n",sum);
}
