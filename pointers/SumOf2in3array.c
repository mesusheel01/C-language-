#include <stdio.h>
void main()
{
    int *p,*q,m,*r,a[10],b[10],c[10],i;
    printf("(Enter the length of array \n");
    scanf("%d",&m);
    printf("Enter the elements of array A\n");
    p=&a[0];
    for(i=0;i<m;i++)
        scanf("%d",p+i);
    printf("Enter the elements of array B\n");
    q=&b[0];
    for(i=0;i<m;i++)
        scanf("%d",q+i);
        r=&c[0];
        for(i=0;i<m;i++)
        {

            *(r+i)=*(p+i)+*(q+i);
        }
        printf("The sum stored in c is \n");

        for(i=0;i<m;i++)
        printf("%d\n",*(r+i));

}
