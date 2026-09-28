//W.A C P to find greatest among Three number inputed numbers
#include<stdio.h>
int main()
{
	printf("Enter three number:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		if(a>c)
		{
			printf("%d is the greatest",a);
		}
		else{
			printf("%d is the greatest",c);
		}
	}
	else{
		if(b>c){
			printf("%d is the greatest",b);
		}
		else{
			printf("%d is the greatest",c);
		}
	}
	return 0,
}
