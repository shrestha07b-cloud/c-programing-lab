/*w.a.c.p. to find the sum of the following series:
1+10+101+1010+...upto n terms*/
#include<stdio.h>
int main()
{
	int n,i=1,term=0;
	long long sum=0;
	printf("enter the numbers of term :");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2!=0)
		{
			term=term*10+1;
		}
		else
		{
			term=term*10;
		}
		i++;
		sum=sum+term;
	}
	printf("\nSum=%d",sum);
	return 0;
}
