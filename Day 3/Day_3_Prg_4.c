#include<stdio.h>
int main()
{
    int n,r,sum=0,operation;
    int rem,c=0;
    char hd[100];
    printf("Enter 1 for binary 2 for hexadeximal =");
    scanf("%d",&operation);
    printf("Enter the decimal = ");
    //fflush(stdout);
    scanf("%d",&n);
    switch(operation)
    {
    case 1 :
    while(n>0)
    {
        r=n%2;
        sum=sum*10+r;
        n=n/2;
    }
    printf("%d",sum);
    break;
    case 2:
    while(n!=0)
    {
        rem=n%16;
        if(rem<10) 
            hd[c++]=48+rem; 
            else
            hd[c++]=55+rem; 

        n=n/16;
    }
    for(c=c-1;c>=0;c--)
    printf("%c",hd[c]);
    break;
    default:
    printf("error");
  }
  return 0; 
}
