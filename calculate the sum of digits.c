//Write a c program to calculate the sum of digits.
#include<stdio.h>
int main()
{
	int digit,num,sum=0;
	printf ("enter the whole number:\n");
	scanf("%d",&num);
	while(num!=0)
	{
		digit=num%10;
		num=num/10;
		sum=sum+digit;
	}
	printf ("sum of digits=%d",sum);
	return 0;
}
