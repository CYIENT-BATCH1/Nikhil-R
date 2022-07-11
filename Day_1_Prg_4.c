#include<stdio.h>
int main()
{
int num,rem,rev=0;
printf("enter the 6 digit number:");
scanf("%d",&num);
while(num !=0)
{
rem=num%10;
if(rem==0)
{
printf("enter number with zero\n");
}
rev=rev*10+rem;
num=num/10;
}
printf("reverse the number is %d",rev);
return 0;
}
