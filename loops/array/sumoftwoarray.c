#include <stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],i,j,m,n;
    printf("Enter the order of first array :\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of first array\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    printf("Enter the order of second array :\n");
    scnaf("%d%d",&m,&n);
    printf("Enter the elements of second array\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&b[i][j]);
    }
    printf("The sum in the third array is:\n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    c[i][j]=a[i][j]+b[i][j];
    printf("%d ",c[i][j]);
}
printf("\n");
}