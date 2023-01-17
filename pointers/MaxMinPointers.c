#include <stdio.h>
void main()
{
    int *p,a[10],s,i,n,max,min;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    p=&a[0];
    for(i=0;i<n;i++)
        scanf("%d",p+i);
        max=a[0];
        min=a[0];
    for(i=0;i<n;i++)
   {
      if(min>p+i)
        {
            min=p+i;
        }
        if(max<p+i)
        max=*p+i;
    }
    printf("The max and minimum value in array a is %d %d",max,min);

}
