//w a c p to check wheather a number is prime number or not
#include<stdio.h>
int main()
{
	int n,i=2;
	printf("enter the number: ");
	scanf("%d",&n);
	while(i<n)
	{
	if(n%i==0)
		{
			break;
			i++;
		}
		
	}
	if(n<1){
		printf("not a prime number");
	}
	else if(i==n){
		printf("prime number");
	}
	else{
		printf("not a prime");
	}
	return 0;
}
