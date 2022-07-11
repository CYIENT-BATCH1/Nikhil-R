#include<stdio.h>
int main()
{
int num;
printf("enter the number");
scanf("%d",&num);
(num%11==0) ? printf(“special”) : printf(“not special”); 
return 0;
}
