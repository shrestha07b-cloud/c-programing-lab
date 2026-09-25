/*find the Sum of the following series 1!+3!+5!+....upto n numbers*/
//1!=1
//3!=3*2*1=6
//5!=5*4*3*2*1=120
//upto n!
#include<stdio.h>
int main()
{
	int i=1,s=0,a=1,f=1,n;
	printf("enter a number:\n");
	scanf("%d",&n);
	while(a<=n)
	{
		while(i<=a)
		{
	 	 f=f*i;
		 i++;
		}
	s=s+f;
	a+=2;
	}
	printf("your sum is:\n%d",s);
	return 0;
}

