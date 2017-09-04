// AUTHOR - SATYAM RAMAWAT
#include<stdio.h>
#include<conio.h>
void min_max_dac(int arr[],int low,int high,int *min,int *max)
 {
  int mid,min1,min2,max1,max2;
  if(low==high)
   *min=*max=arr[low]; 
  else 
   {
    if(low==high-1)
     {
      if(arr[low]>arr[high])
       {
        *min=arr[high];
        *max=arr[low];
       }
      else
       {
        *min=arr[low];
        *max=arr[high];
       }
     }    
    else
     {
      mid=(low+high)/2;
      min_max_dac(arr,low,mid,&min1,&max1);
      min_max_dac(arr,mid+1,high,min,max);
      if(max1>*max)
       *max=max1;
      if(min1<*min)
       *min=min1; 
     }    
   }
 } 
main()
 {
  int choice,min=0,max=0;
  int i,limit,arr[10],c=1;
  printf("Enter the limit of the array:-");
  scanf("%d",&limit);
  printf("\n Array Elements:-\n");
  for(i=0;i<limit;i++)
   {
    printf("Element[%d]:",i);
    scanf("%d",&arr[i]);
   }
  min_max_dac(arr,0,limit-1,&min,&max);
  printf("Minimum:%d\nMaximum:%d",min,max);
}
