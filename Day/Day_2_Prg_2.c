#include<stdio.h>
int main()
{
	int n,r,binary=0;
	int temp=1;
	printf("Enter the number");
	fflush(stdout);
	scanf("%d",&n);
	while(n!=0)
	{
	   r=n%2;
	   n=n/2;
	   binary=binary+r*temp;
	   temp=temp*10;
	}
	printf("binary number is %d",binary);
}