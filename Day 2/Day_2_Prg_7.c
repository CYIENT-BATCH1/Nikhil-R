#include<stdio.h>
int main()
{
	int startyear,endyear,i;
	printf("print leap year between two given years \n");
	printf("Enter start year: ");
	scanf("%d", &startyear);
	printf("Enter End year: ");
	scanf("%d", &endyear);
	printf("Leap year:\n");
	for(i=startyear; i <=endyear; i++)
	{
		if((0 == i % 4)&& (0!= i % 100)||(0==i % 400))
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
