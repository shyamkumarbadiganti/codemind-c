#include<stdio.h>
int main()
{
    int n,i,n1;
    scanf("%d%d",&n,&n1);
    for(i=1;i<=n1;i++)
    {
        if(i%2!=0)
        {
          printf("%d x %d = %d
",n,i,n*i);  
        }
    }
}