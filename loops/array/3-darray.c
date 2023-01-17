#include <stdio.h>
void main()
{
    int a[10][10][10],i,o,j,k,sum=0,m,n;
    printf("Enter the order of matrix\n");
    scanf("%d %d%d",&m,&n,&o);
    if(m<10 && n<10)
    {
        printf("Enter the elements of 2-D array\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                for(k=0;k<o;k++)
                scanf("%d",&a[i][j][k]);
            }
        }
    }
    printf("The matrix of order %dx%dx%d is :\n",m,n,k);
       for(i=0;i<m;i++)
       {
           for(j=0;j<n;j++)
           {
               for(k=0;k<o;k++)
               printf("%d ",a[i][j][k]);
           } printf("\n");
          }  
     }
