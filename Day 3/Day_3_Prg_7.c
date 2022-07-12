#include<stdio.h>
int main()
{
    int year,month,age;
    printf("Enter the year and month in the format of xx/xxxx ");
    scanf("%d/%d",&month,&year);
    age=2022-year;
    if(month>3)
            {
        age--;
            }
    printf("%d",age);
}
