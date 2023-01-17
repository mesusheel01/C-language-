#include <stdio.h>
void main()
{
    int a[10][10],i,j,m,n,sum=0;
    printf("Enter the order of array \n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of 2-D array \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("The matrix is %dx%d\n",m,n);
    if(m==n)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d ",a[i][j]);
                if(i==j)
                sum=sum+a[i][j];
            }
            printf("\n");
        }
        printf("The sum of diagonals is : %d\n",sum);
    }
    else 
    printf("This is not a diagonal matrix so cannot find the sum  of diagonal elements.");
}