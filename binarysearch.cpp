//AUTHOR - SATYAM RAMAWAT
#include<stdio.h>

int main()
{
	int array[20],size,first,last,mid,search,i;
	printf("Enter the size of array\n");
	scanf("%d",&size);
	printf("Enter the elements of array in ascending order\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Enter the searching element\n");
	scanf("%d",&search);
	first=0;
	last=size-1;
	mid=(first+last)/2;
	while(first<=last)
	{
		if(array[mid]<search)
		{
			first=mid+1;
		}
		else if(array[mid]==search)
		{
			printf("Element is found %d\n",mid+1);
			break;
		}
		else
		{
			last=mid-1;
		}
		
		mid=(first+last)/2;
		
	}
	if (first > last)
      printf("Element not found\n");
}
