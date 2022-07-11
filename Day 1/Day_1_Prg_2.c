#include<stdio.h>
int main()
{
char ch;
printf("enter the character");
scanf("%c",&ch);
(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')?
printf("\n %c is vowel",ch):printf("\n %c is consonant",ch);
}
