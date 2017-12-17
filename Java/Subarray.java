import java.io.*;
import java.util.*;

public class Solution 
{
    public static void main(String[] args) 
	{
    	int count = 0;
    	Scanner sc = new Scanner(System.in);
    	int n = sc.nextInt();
    	int[] MyArray = new int [n];
    	for(int i=0; i<n; i++)
    	{
    		int x = sc.nextInt();
    		MyArray[i] = x;
    	}  	
		for(int i=0; i<n; i++)
		{
			int sum = 0;			
			for (int j = i; j < n; j++)
			{
				sum += MyArray[j];				
				if (sum < 0)
				{
					count ++;
				}
			}
		}
		System.out.println(count);
    }
}