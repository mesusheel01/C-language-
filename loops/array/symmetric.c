#include <stdio.h>
void main()
{
    int a[10][10],b[10][10],s=0,m,n,i,j;
    printf("Enter the order of array a\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of Matrix A\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    printf("Matrix a of order  %dx%d is :\n",m,n);
    for(i=0;i<m;i++)
    {
      printf("\t");
        for(j=0;j<n;j++)
        printf("%d ",a[i][j]);
        printf("\n");
            }
        for(i=0;i<m;i++)
           {
            for(j=0;j<n;j++)
            {
              b[j][i]=a[i][j];
            }
    }
printf("The Matrix after transpose is \n");
         for(i=0;i<m;i++)
           {
      printf("\t");
            for(j=0;j<n;j++)
 {             printf("%d ",b[i][j]);}
              printf("\n");
 }
           
        if(m==n)
        {
         for(i=0;i<m;i++)
           {
             for(j=0;j<n;j++){
            if(a[i][j]==b[i][j])
            s++;
         }
        }
        }
        if(s==m*n)
        printf("The Matrix A is Symmetric ");
        else 
        printf("The Matrix A is not Symmetric ");
}