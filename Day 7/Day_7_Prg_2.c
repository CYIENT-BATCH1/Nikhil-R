#include <stdio.h>
unsigned int swapBits(unsigned int x)
{
unsigned int even_bits = x & 0xAAAAAAAA; //get the even bit 
unsigned int odd_bits = x & 0x55555555; //get the odd bit
even_bits >>= 1; //Right shift even bit
odd_bits <<= 1; //left shift odd bit
return (even_bits | odd_bits); //combine even and odd bits
}

int main() //Driver code
{
    unsigned int x = 64; //01100100
    printf("%u ", swapBits(x)); 
        return 0;
}