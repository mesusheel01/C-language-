#include <stdio.h>
void main()
{
    int *p,i,n,a[10],c=0,z;
    printf("Enter the length of array\n");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    p=&a[0];
    for(i=0;i<n;i++)
    {
    scanf("%d",p+i);
    }
    printf("Enter the element to search in this array\n");
    scanf("%d",&z);
    for(i=0;i<n;i++)
    {
        if(z==*(p+i))
        {
            c++;printf("Element is found at position %d\n",i+1);
        }
    }
    if(c>0)
    {
        printf("Element is found in this array %d time \n",c);
    }
    else
        printf("Element not found");
}
