#include <stdio.h>
void main()
{
    int a[10],i,k,n,mid=0,low=0,high=0;
    printf("Enter the length of your array\n");
    scanf("%d",n);
    printf("Enter the elements of array A in ascending order\n");
    for(i=0;i<n;i++)
    {
       scanf("%d",a[i]);
    }
    printf("Enter the element to search in this array");
    scanf("%d",k);
    for(i=0;i<n;i++)
    {
        high = a[n];
        low = a[i];
        mid=low + high;
        if(mid==k)
            printf("Element %d found at %d ",k,mid);
        else

            mid=low;
    }
}
