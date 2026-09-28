//0,1,1,2,3,5,8...upto n term. W.C.P to display the given sequence(using while loop)[FEBONAKI serise]
#include<stdio.h>
int main()
{
	int i=1, n, a=0, b=1,c;
	printf ("enter the number of term:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
		i++;
	}
	return 0;
}
