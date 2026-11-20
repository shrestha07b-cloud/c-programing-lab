#include <stdio.h>
int main()
{
	int marks;
	char grade;
	printf("enter the marks=");
	scanf("%d",&marks);
	if(marks<0||marks>100){
		printf("invalid inputs");
		return 0;
	}
	switch(marks/10){
		case 10:
		case 9:
		case 8:
			grade='a';
			break;
		case 7:
		case 6:
			grade='b';
			break;
		case 5:
			grade='c';
			break;
		case 4:
			grade='d';
			break;
		default:
			grade='f';
			break;
	}
	printf("grade: %c",grade);
	return 0;
}
