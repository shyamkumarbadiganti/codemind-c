#include<stdio.h>
int main()
{
    float a,b,avg;
    scanf("%f%f",&a,&b);
    avg=(a+b)*0.5;
    printf("Average of %.0f and %.0f is: %.2f",a,b,avg);
}