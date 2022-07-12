
#include <stdio.h>
int main()
{
	int a=50,b=60;
	printf("before swap = %d %d ",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n after swap= %d %d",a,b);
	return 0;

}
