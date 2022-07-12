
#include <stdio.h>
int main()
{
	int n;
	printf("enter the number\n");
	scanf("%d",&n);
	if((n&(n-1))==0)
		printf("the bit is pow of 2\n");
	else
		printf("the bit is not pow of 2\n");


	return 0;
}
