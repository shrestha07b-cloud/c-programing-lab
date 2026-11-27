//w.a.c.p. to find the smallest number in an array//

#include<stdio.h>
int main()
{
	int i,n,max;
	printf(" enter the size of the array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int a[n];
		max=a[0];
		printf("enter the elements:");
		scanf("%d",&a[i]);
		if(a[i]<max){
			max=a[i];
	    }
	}
	printf("smallest=%d",max);
	return 0;
}
