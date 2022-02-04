#include<stdio.h>
int main()
{
    int n,m,sum=0,p,temp;
    scanf("%d",&n);
    temp=n;
    p=n*n;
    while(p!=0)
    {
        m=p%10;
        p=p/10;
        sum=sum+m;
    }
    if(sum==n)
        printf("Neon Number");
    else
        printf("Not Neon Number");
}