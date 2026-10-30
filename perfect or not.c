//w a c p to check whether a number is perfect or not
#include<stdio.h>
int main()
{
	int n, i=1,s=0;
	printf("enter any number=");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			s=s+i;
		}
	}
	if(n==s)
	{
		printf("perfect numbrer");
	}
	else
	{
		printf("not a perfect number");
	}
	return 0;
}
