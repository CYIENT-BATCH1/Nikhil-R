#include <stdio.h>
int main() //Main function
{
  int num1,num2; //variable name of two value
  printf("enter the values"); //getting the value from user input 
  fflush(stdout);
  scanf("%d%d",&num1,&num2); //scan a integers
  if((28 & num1) == 28) //we taking 28 because of "ADCONO" and num1 and then if a num1 is=28                                                                                                                                                                                                                                                                                                                                                                                                               
  {
      num2=num2&0xF0; //take 0xF0 to clear all bits to 0 and save num2
      printf("%d",num2); //print the num2 save value
  }
  else
      printf(" not equal nothing");
}