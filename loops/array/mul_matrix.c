#include <stdio.h>
void main()
{
    int c[10][10],a[10][10],b[10][10],m,n,p,q,i,j,k;
    printf("Enter the order of Matrix a\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of Matrix a \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
     printf("Enter the order of Matrix b\n");
    scanf("%d %d",&p,&q);
    printf("Enter the elements of Matrix b\n");
        for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        scanf("%d",&b[i][j]);
    }
    printf("The matrix a and b are \n");
     for(i=0;i<m;i++)
    {printf("\t");
        for(j=0;j<n;j++)
     printf("%d ",a[i][j]);
    }
    printf("\t");
     for(i=0;i<p;i++)
    {printf("\t");
        for(j=0;j<q;j++)
        printf("%d ",b[i][j]);
    }
   for(i=0;i<m;i++)
    {
        
        for(j=0;j<q;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            c[i][j]+=a[i][k]*b[k][j];
        }
    }
    printf("Matrix c after multiplying a and b is \n");
for(i=0;i<m;i++)
{printf("\t");
for (j=0;j<q;j++)
{
    printf("%d ",c[i][j]);
}
}
}