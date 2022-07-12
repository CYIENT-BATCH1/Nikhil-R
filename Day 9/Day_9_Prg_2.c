#include <stdio.h>
int main()

{
  int num1,num2,pos=3,pos1=6,pos2=7;
  printf("enter the values");
  scanf("%d%d",&num1,&num2);
  if((48 & num1) == 48)
  {
      num2=num2|(1<<pos)|(1<<pos1)|(1<<pos2);
      printf("%d",num2);
  }
  else
  printf(" not equal nothing");

}