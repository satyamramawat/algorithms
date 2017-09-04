/* AUTHOR - SATYAM RAMAWAT */
#include <stdio.h> 
int main()
{
  int array[10],size,i,j,temp;
 
  printf("Enter number of elements\n");
  scanf("%d", &size);
 
  printf("Enter %d integers\n", size);
  for (i=0;i<size;i++) 
  {
    scanf("%d", &array[i]);
  }
 
  for (i=0;i<=size-1;i++) 
  {
    j=i;
      while (j>0 && array[j] < array[j-1]) 
	  {
         temp=array[j];
         array[j]=array[j-1];
         array[j-1]=temp;
         j--;
      }
  }
  printf("Sorted list in ascending order:\n");
  
  for(i=0;i<=size-1;i++) 
  {
    printf("%d\n", array[i]);
  } 
  return 0;
}
