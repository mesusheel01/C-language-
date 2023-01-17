#include <stdio.h>
void main()
{
    int a[5],i,j,t=0;
    printf("Now enter the elements of array to perform sorting \n");
    for(i=0;i<4.;i++)
    scanf("%d",&a[i]);
for(i=0;i<4;i++)
{
    j=i+1;
    while (j>0 && a[j-1]>a[j])
    {
        t=a[j-1];
        a[j-1]=a[j];
        a[j]=t;
        j--;
    }
}
for(i=0;i<4;i++)
printf("Elements after sorting : %d",a[i]);
}