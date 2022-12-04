#include<stdio.h>
int main()
{
    int n1,n2,a,b,c,d,e;
    scanf("%d%d",&n1,&n2);
    a=n1+n2;
    printf("Sum:%d
",a);
    b=n1-n2;
    printf("Difference:%d
",b);
    c=n1*n2;
    printf("Product:%d
",c);
    d=n1/n2;
    printf("Quotient:%d
",d);
    e=n1%n2;
    printf("Remainder:%d",e);
}