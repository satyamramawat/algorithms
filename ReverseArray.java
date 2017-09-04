//AUTHOR - SATYAM RAMAWAT satyamramawat@gmail.com
import java.io.*;
import java.util.*;

class ReverseArray
{
    public static void main(String[]args)
    {
        int array[]={1,2,3,4,5,6};
        int temp;
        
        int start=0;
        int end=5;

        while(start<end)
        {
            temp=array[start];
            array[start]=array[end];
            array[end]=temp;
            start++;
            end--;
            
        }
       
        for(int a=0;a<array.length;a++)
        {
            System.out.print(array[a]+" ");
        }
    }
}