#include <stdio.h>
void selection(int [],int,int,int,int);

int main()
{
    int list[5],size,temp,i,j;


    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        scanf("%d",&list[i]);
    }
    selection(list,0,0,size,1);

    for(i=0;i<size;i++)
    {
        printf("%d  ",list[i]);
    }

    return 0;
}

void selection(int list[],int i,int j,int size,int flag)
{
    int temp;

    if (i<size-1)
    {
        if(flag)
        {
            j=i+1;
        }
        if(j<size)
        {
            if(list[i]>list[j])
            {
                temp=list[i];
                list[i]=list[j];
                list[j]=temp;
            }
            selection(list,i,j+1,size,0);
        }
        selection(list,i+1,0,size,1);
    }
}
