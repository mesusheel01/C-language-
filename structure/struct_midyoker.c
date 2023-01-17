#include <stdio.h>
struct student
{
    int r;
    char name;
    float s1,s2,s3;
}s[3];
void main()
{

 float maxper;
    int maxmark,i,max1=0,max2=0,max3=0,sum1=0,sum2=0,sum3=0,avg1,avg2,avg3,c=0;
    printf("Enter the 1:Roll number of the student\n2: Name of the student\n3: Marks in three subject\n");
  for(i=0;i<3;i++)
    scanf("%d %s %f%f%f",&s[i].r,&s[i].name,&s[i].s1,&s[i].s2,&s[i].s3);
    for(i=0;i<3;i++)
    {
        if(s[max1].s1<s[i+1].s1)
            max1=i+1;
            if(s[max2].s2<s[i+1].s2)
            max2=i+1;
        if(s[max3].s3<s[i+1].s3)
            max3=i+1;
        if((s[i].s1+s[i].s2+s[i].s3)<(s[i+1].s1+s[i+1].s2+s[i+1].s3))
            {maxmark=(s[i+1].s1+s[i+1].s2+s[i+1].s3);
            c=i+1;}
            sum1=sum1+s[i].s1;
            sum2=sum2+s[i].s2;
            sum3=sum3+s[i].s3;
    }
    printf("Maximum mark in subject one is %d\nMaximum mark in subject 2 is %d\nMaximum mark in subject 3 is %d\n",s[max1].s1,s[max2].s2,s[max3].s3);
    maxper=maxmark/3;
    printf("Maximum percentage is %f\n",maxper);
    avg1=sum1/3;
    avg2=sum2/3;
    avg3=sum3/3;
    for(i=0;i<3;i++)
    {
        if(s[i].s1<avg1 &&s[i].s2<avg2 && s[i].s3<avg3)
        {
            printf("%s has scored %d %d %d marks than average marks average marks %d %d %d ",s[i].s1,s[i].s2,s[i].s3,s[i].s3,avg1,avg2,avg3);
        }
        }

     }
