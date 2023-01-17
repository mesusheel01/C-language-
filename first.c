#include <stdio.h>
void main()
{
    int a[4],i,c=0,m=0,n;
printf("Enter the elements of array a\n");
    for(i=0;i<4;i++)
    {
scanf("%d",&a[i]);
    }
    printf("Enter the element to search in this array\n");
    scanf("%d",&n);
    for(i=0;i<4;i++)
    {
        if(a[i]==n)
        {
            m=i;
            c++;

        }
    }
    if(c>0)
    printf("The element %d is found at %d %d time\n",n,m+1,i-1);
    else
    printf("Element %d is not found in this array",n);
} 