/*AUTHOR - SATYAM RAMAWAT */
#include<stdio.h>
#include<conio.h>
void msort(int,int);
void merge(int,int,int);
int a[10];
main()
{
	int i,n;
	printf("Enter the limit\n");
	scanf("%d",&n);
	
	printf("Enter the elements in unsorted order\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("Given array is:\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	printf("\n");
	
	msort(0,n-1);
	
	printf("The sorted elements are:\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	getch();
}

void msort(int low,int high)
{
	int mid;
	if(low>=high)
	return;
	mid=(low+high)/2;
	msort(low,mid);
	msort(mid+1,high);
	merge(low,mid,high);
}

void merge(int low,int mid,int high)
{
	int i,j,k,b[20];
	i=low;
	j=mid+1;
	k=low;
	while(i<=mid && j<=high)
	{
		if(a[i]<a[j])
		{
		b[k++]=a[i++];
		}
		else
		b[k++]=a[j++];
	}
	while(i<=mid)
		b[k++]=a[i++];
	while(j<=high)
		b[k++]=a[j++];
	for(i=low;i<=high;i++)
		a[i]=b[i];
}
