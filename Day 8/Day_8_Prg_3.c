
 3.I)Set the register T0CON value such a way that bit TMR0ON and PSA bit are set (1), without disturbing the other bits.



#include<stdio.h>

int main() //Main funtion 
{

int n=0xfa; //hex value to change position
int pos=3; //changing the position 3
int pos1=7; //changing the position 7
n=n|(1<<pos)|(1<<pos1); //left shifting the position 
printf("%x",n); //print n

}


II). Find out the value of T0PS2, T0PS1, T0PS0 bits in T0CON register if the value of the register is 0xF3


#include <stdio.h>
int main() //Main function
{
int n=0xf3,x,i;
for(i=2;i>=0;i--) //using for loop
{
x=(n>>i)&1; //changing the position by right shift
printf("%x",x); //printing x
}

}
