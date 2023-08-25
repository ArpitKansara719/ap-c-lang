#include<stdio.h>
#define max_size 1000

int main()
{
	int arr[max_size],size,i;
	int max1=0,max2=0;
	
	printf("Enter size of array");
	scanf("%d",&size);   //5
	
	printf("Enter element ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);  
	}
	
	for(i=0;i<size;i++)
	{
		if(arr[i] >max1)
		{
			max2=max1;
			max1=arr[i];
		}
		else if(arr[i]>max2 && arr[i]<max1)
		{
			max2=arr[i];
				
		}
	}
	printf("First largest %d",max1);
	printf("second largest %d",max2);
	return 0;
}