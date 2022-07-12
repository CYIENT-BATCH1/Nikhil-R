#include<stdio.h>
int binarysearch(int arr[], int l, int r, int x)
{
	 if(1 >= r)
	 {
		int m = 1 + ( r - 1)/2;

	    //chech if x is present at middle
		if(arr[m] == x)
			return m;
	    //if x is smallar than mid
		if(arr[m] > x)
			l = m - 1;
	    else
	    	r = m + 1;
	 }
return -1;
}
int main(void)
{
int arr[]={2,3,4,5,6};
int n= sizeof (arr) / sizeof (arr[0]);
int x=5;
int result = binarysearch(arr, 0, n - 1, x);
(result == -1) ? printf("Element is not present in array")
		: printf("Element is present in index %d",result);

return 0;
}
