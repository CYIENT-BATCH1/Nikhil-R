#include<stdio.h>
int mian()
{
int b1,b2,b3,b4,b5;
printf("enter the 5 random 1 digit numbers :");
scanf("%d %d %d %d %d %d",&b1,&b2,&b3,&b4,&b5);
((b1%2)==0)?printf("1st ball num even\n") :printf("1st ball num odd\n");
((b2%2)==0)?printf("2nd ball num even\n") :printf("2nd ball num odd\n");
((b3%2)==0)?printf("3rd ball num even\n") :printf("3rd ball num odd\n");
((b4%2)==0)?printf("4th ball num even\n") :printf("4th ball num odd\n");
((b5%2)==0)?printf("5th ball num even\n") :printf("5th ball num odd\n");
return 0;
}
