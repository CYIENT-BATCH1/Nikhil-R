
#include <stdio.h>
int main()
{
	int a,b,big;
	//printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
	(a>b)?(big=a):(big=b);
	printf("%d %d the biggest number is:%d\n",a,b,big);
	return 0;

}
