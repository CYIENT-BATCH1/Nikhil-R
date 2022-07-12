#include<stdio.h>
int main()
{
	int n,total;
	printf("Enter the number of students");
	fflush(stdout);
	scanf("%d",&n);
	total=n*(n-1)/2;
	printf("total students %d",total);
	return 0;
}
