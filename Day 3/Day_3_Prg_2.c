#include<stdio.h>
int main()
{
    int n, sum=0, firstdigit,lastdigit ;
    printf("Enter the first digit and last digit  ");
    fflush(stdout);
    scanf("%d",&n);
    lastdigit =n % 10;
    while(n>=10)
    {
        n=n/10;
    }
    firstdigit=n;
    sum=firstdigit + lastdigit;
    printf("sum of firstdigit and lastdigit = %d",sum);
    return 0;
}
