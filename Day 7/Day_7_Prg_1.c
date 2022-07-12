#include <stdio.h>

int swap_Endians(int value)  //Funtion to swap number
{

int leftmost_byte;  //This variable store value of leftmost_byte
int left_middle_byte; //This variable store value of left_middle_byte
int right_middle_byte; //This variable store value of right_middle_byte
int rightmost_byte; //This variable store value of rightmost_byte
int result; //This store value after sawp number

leftmost_byte = (value & 0x000000FF) >> 0; 
left_middle_byte = (value & 0x0000FF00) >> 8;

right_middle_byte = (value & 0x00FF0000) >> 16;
rightmost_byte = (value & 0xFF000000) >> 24;

leftmost_byte <<= 24; //left shift by 24 get a leftmost end
left_middle_byte <<= 16; //left shift by 16 get a left_middle_byte

right_middle_byte <<=8; //right shift by 8 get a rightmost_byte
rightmost_byte <<= 0; //it is correct position
result = (leftmost_byte | left_middle_byte | right_middle_byte | rightmost_byte); //Result 
 return result; 
}

 int main() //Driver code
{

    int big_Endian = 0x12345678; //value of hexadecimal
    int little_Endian = 0x78563412; //value of hexadecimal

    int result1, result2;

    result1 = swap_Endians(big_Endian);

    result2 = swap_Endians(little_Endian);

    printf("big Endian to little: 0x %x\n little Endian to big: 0x%x\n",
           result1, result2); //print the result

    return 0;
}
