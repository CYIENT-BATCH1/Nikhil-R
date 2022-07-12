#include <stdio.h>
int main() //Main function
{
 char *a[]={"cat","dog","fox","rat"," ","frog"};
 int size=sizeof a/sizeof(a[0]);
 int pos=0;
 printf("%d\n",size);
 int i;
 for(i=0;i<6;i++){
 //printf("\n");
 if(a[i]==" ") //if array in which has space
 {
a[i]="CYIENT\n"; //space should be filled with cyient
pos=i;
 printf("%s",*(a+i)); //printing the array
 }
 }
printf("pos=%d\n",pos); //printing the position
 return 0;
}

