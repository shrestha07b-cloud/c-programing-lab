//w.a.c.p. to find the average in an array//

#include<stdio.h>
int main()
{
	int i,n;
	float avg,sum=0.0;
	printf(" enter the array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	avg=sum/n;
	printf("%.2f",avg);
	return 0;
}
