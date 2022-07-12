#include <stdio.h>
int main() //Main function
{
    int arr[7]={25,58,6,32,98,7}; //initize the array value using pointer to access the array address
    int *ptr;
    int i,j,t;
    ptr=&arr;
    for(i=0;ptr[i];i++) //array index starts from zero and pointer 1 and it will be incremented
{
    for(j=i+1;ptr[j];j++)
    {
        if(ptr[i]>ptr[j]) //swap the pointer i and j
        {
            t=ptr[i];
            ptr[i]=ptr[j];
            ptr[j]=t;
        }
    }
    printf("%d ",ptr[i]); //printing pointer i
}
    return 0;
}
