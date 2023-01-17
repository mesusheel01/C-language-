#include <stdio.h>
void main()
{
    int *p,a[0],t=0,n,i,j;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    p=&a[0];
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(*(p+j)>*(p+j+1))
            {
                t=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=t;            }
        }
    }
    printf("Array after sorting\n");
    for(i=0;i<n;i++)
        printf("%d\n",*(p+i));
}

