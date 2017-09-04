/*AUTHOR - SATYAM RAMAWAT */
#include<stdio.h>
#include<conio.h>
int main()
{
 int arr[30];
 int i,j,k,swap,size;
 printf("Enter total no. of elements : ");
 scanf("%d", &size);
 for(k=0; k<size; k++)
 {
   printf("\nEnter %d number : ",k+1);
   scanf("%d",&arr[k]);
 }
 for(i=size/2; i>0; i=i/2)
 for(j=i; j<size; j++)
  for(k=j-i; k>0; k=k-i)
   if(arr[k+i]>=arr[k])
            break;
    else
        {
            swap=arr[k];
            arr[k]=arr[k+i];
            arr[k+i]=swap;
        }   
 
 printf("\t**** Shell Sorting ****\n");
 for(k=0; k<size; k++)
     printf("%d\t",arr[k]);

}
