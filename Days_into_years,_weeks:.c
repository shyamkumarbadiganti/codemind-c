#include<stdio.h>
int main()
{
    int n,y,w;
    scanf("%d",&n);
    y=n/365;
    printf("%d
",y);
    w=(n%365)/7;
    printf("%d",w);
}