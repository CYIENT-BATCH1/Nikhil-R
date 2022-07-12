#include<stdio.h>
int main()
{
    int n,n1,n2,n3,rev;
    printf("Enter the number to reverse = ");
    fflush(stdout);
    scanf("%d",&n);
    n1=n/100;
    n2=(n%100)/10;
    n3=(n%10)/100;
    rev=n3*100+n2*10;
    printf("Reverse digit =%d",rev);
    return 0; 
}
