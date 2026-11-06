/* w.a.p. to print the following pattern
 1 2 3 4 5
   1 2 3 4
     1 2 3
       1 2
         1 
   */
#include<stdio.h>
int main(){
	int n,i,j,k;
	printf("enter any no:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(k=1;k<=i;k++){
			printf(" ");
		}
		for(j=1;j<=n+1-i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}

