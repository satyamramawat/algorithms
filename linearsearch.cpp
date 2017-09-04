/*AUTHOR - SATYAM RAMAWAT*/
#include<iostream>
using namespace std;

int main()
{
	int a[100],n,i,s,found=0;
	cout<<"Enter the number of elements:";
	cin>>n;
	cout<<"Enter the numbers:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cout<<"Enter the number to search:";
	cin>>s;
	
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
		{
		
			cout<<"The element is present at location "<<i+1;
			found=1;
			break;
		}
//		else
//		cout<<"The element is not found";
	}
	if(found==0)
	{
		cout<<"The element is not found";
	}
	return 0;
}
