
#include <stdio.h>
int main()
{
	int n,n1,comp;
	printf("enter the number\n");
	scanf("%d",&n);
        printf("enter the bit to set\n");
	scanf("%d",&n1);
	comp=n^(1 << n1);
	printf("before comp the bit = %d  %d",n1,n);
	printf("\n after comp the bit = %d  %d",n1,comp);
	return 0;
}
