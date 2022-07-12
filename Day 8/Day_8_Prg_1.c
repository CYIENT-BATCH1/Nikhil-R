#include<stdio.h>
    int bitposition(int arg1,int arg2)
    {
        arg1=arg1^(1<<arg2); //using "XOR"condition of arg1 equal to first arg1  
    }
    int main() // Main function
{
    int a=0x81;
    printf("%d",(a)); //printing a
}
