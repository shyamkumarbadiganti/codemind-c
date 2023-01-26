#include<stdio.h>
#include<math.h>
int main()
{
     double s1,s2,s3,s ;
    scanf("%lf%lf%lf",&s1,&s2,&s3);
    s=(s1+s2+s3)/2;
    float area;
    area= sqrt (s*(s-s1)*(s-s2)*(s-s3));
    printf("%.2f",area);
}