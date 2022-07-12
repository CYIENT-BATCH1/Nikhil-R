#include<stdio.h>
int main()
{
	int a[]={1,3,4,5,6,3,3,3};
	int n=sizeof(a)/sizeof(a[0]);
	int i,count=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==3)
				count++;
	}
	printf("%d",count);
}
