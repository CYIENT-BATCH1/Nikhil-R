#include<stdio.h>
int main()
{
	int number,sum=0,m;
	printf("Enter the phone number:");
	scanf("%d",&number);
	m=number%10;
	sum=sum+m;
	number=number/10;
	printf("%d",number);
}
