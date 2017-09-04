 //AUTHOR - SATYAM RAMAWAT 
#include <stdio.h>
 
int main()
{
   int array[100], size, i, j, position, swap;
  printf("Enter number of elements\n");
   scanf("%d", &size);
   printf("Enter %d integers\n", size);
   for ( i = 0 ; i < size ; i++ )
      scanf("%d", &array[i]);
 
   for ( i = 0 ; i < ( size - 1 ) ; i++ )
   {
      position = i;
      for ( j = i + 1 ; j < size ; j++ )
      {
         if ( array[position] > array[j] )
            position = j;
      }
      
	  if ( position != i )
      {
         swap = array[i];
         array[i] = array[position];
         array[position] = swap;
      }
   }
 
   printf("Sorted list in ascending order:\n");
   for ( i = 0 ; i < size ; i++ )
      printf("%d\n", array[i]);
 
   return 0;
}
