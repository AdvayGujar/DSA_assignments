#include <stdio.h>
int main()
{
	int arr[20],i,largest=0;

	printf("\nEnter the elements of the array.\n");
	for(i=0;i<20;i++)
	{
		scanf("%d",& arr[i]);
	}

	for(i=0;i<20;i++)
	{
		if(arr[i] > largest)
			largest = arr[i];
	}
	
	printf("\nLargest number in the array is %d.",largest);
}
