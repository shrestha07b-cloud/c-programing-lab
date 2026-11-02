/* w.a.p. to print
5 5 5 5 5
4 4 4 4
3 3 3
2 2
1
*/
#include<stdio.h>
int main(){
	int n,i,j;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{

		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}
