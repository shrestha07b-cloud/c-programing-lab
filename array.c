//w.a.c.p. to take a input as an array and display into the screen//
#include<stdio.h>
int main(){
	int n;
	
	printf("enter the size of the array:");
	scanf("%d",&n);
	int a[n],i;
	
	for(i=0;i<n;i++){
		printf("enter value:");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	return 0;
	
}