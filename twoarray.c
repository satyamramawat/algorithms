//AUTHOR - SATYAM RAMAWAT 
//Converting two arrays into one array
#include<stdio.h>

int main()
{
	int size1,size2,size3,i,j,a;
	
	printf("Enter the size of array 1\n");
	scanf("%d",&size1);
	printf("Enter the size of array 2\n");
	scanf("%d",&size2);
	size3=size1+size2;
	
	int arrayA[size1],arrayB[size2],arrayC[size3];
	
	printf("Enter the %d elements of 1st array\n",size1);
	for(i=0;i<size1;i++)
	{
		scanf("%d",&arrayA[i]);
	}
	
	printf("Enter the %d elements of 2nd array\n",size2);
	for(i=0;i<size2;i++)
	{
		scanf("%d",&arrayB[i]);
	}
	
		for(j=0;j<size1;j++)
		{
		 arrayC[j]=arrayA[j];	
		}	
	
		for(a=0;a<size2;a++)
		{
		 arrayC[size1]=arrayB[a];	
		 size1++;
		}
		

	
	printf("New array is\n");
	for(i=0;i<size3;i++)
	{
		printf("%d\n",arrayC[i]);
	}
}
