1. I). Set the register SSPSTAT value such a way that bit CKE, P and S bit are cleared (0), without disturbing the other bits.



#include <stdio.h>
int main() //Main function
{
	int a=0x58; //value of SSPSTAT convert hex to dec
	int b =0xff; //it is taken to make the three bit to 0

	int c=a^b; //do "XOR" 
	printf("%x",c); //print the value 

}


II). Find out the value of UA, BF, SMP bits in SSPSTAT register if the value of the register is 0x55


#include<stdio.h>
int main()
{
	int a=0x55; //initiaze the value
	int b=a&(1<<0); //changing the position of bit 0 to 0
	int c=a&(1<<1); //changing the position of bit 1 to 0 
	int d=a&(1<<7); //changing the position of bit 7 to 0
	printf("%d %d %d",b,c,d); //printing the variables of position
	return 0;
}
