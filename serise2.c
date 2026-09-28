//1+2+4+7+11+..upto n term. W.C.P to calculate sum of the given series(using while loop)
#include<stdio.h>
int main()
{
	int i=1, n, sum=0, term=1, d=1;
	printf ("enter the number of term:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\t",term);
		sum=sum+term;
		term=term+d;
		d++;
		i++;
	}
	printf("\n Sum of the series=%d",sum);
	return 0;
}
