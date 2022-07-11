#include <stdio.h>
int main()
{
//Declaration of the variables.
int x,y,c,d,e,f,g,h,i;
printf("enter the 9 digit\n");
//Ask input from the user (1-9).
scanf("%d %d %d %d %d %d %d %d %d",&x,&y,&c,&d,&e,&f,&g,&h,&i);
//Choose these two consecutive numbers as per the choice and swap them back in their right places according to ascending order.  
printf("after swapping\n");
   x=x+y;                                                       
   y=x-y;                  
   x=x-y;    
//print the numbers after swapping the two consecutive numbers.               
printf("%d %d %d %d %d %d %d %d %d",x,y,c,d,e,f,g,h,i);       
return 0;  
}