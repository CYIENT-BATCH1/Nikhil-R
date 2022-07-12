#include <stdio.h>
int main()
{
	int n,n1,set;
	printf("enter the number\n");
	scanf("%d",&n);
        printf("enter the bit to set\n");
	scanf("%d",&n1);
	set=(1 << n1)|n;
	printf("before set the bit = %d  %d",n1,n);
	printf("\n after set the bit = %d  %d",n1,set);
	return 0;
}
