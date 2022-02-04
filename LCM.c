#include<stdio.h>
int main()
{
	int a,b,i;
	scanf("%d %d",&a,&b);//12 18
	for(i=1;i<=a*b;i++)
	{
		if(i%a==0 && i%b==0)//
		{
			printf("%d ",i);
			break;
			
		}
	}
}