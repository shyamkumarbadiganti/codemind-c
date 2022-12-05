#include<stdio.h>
int main()
{
    float s,sa,vol;
    scanf("%f",&s);
    sa=s*s*6;
    printf("Surface area = %.2f and",sa);
    vol=s*s*s;
    printf(" Volume = %.2f",vol);
}