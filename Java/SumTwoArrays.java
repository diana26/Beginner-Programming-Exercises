import java.util.Scanner;

public class SumTwoArrays 
{
	public static void main(String[] args) 
	{	
		Scanner s = new Scanner(System.in);

		int N = s.nextInt();	
		int[] ArrayA = new int[N];
		int[] ArrayB = new int[N];
		int[] sumArray = new int[N];
				
		for(int i=0; i<N; i++) 
		{
			ArrayA[i] = s.nextInt();
		}		
		for(int i=0; i<N; i++) 
		{
			ArrayB[i] = s.nextInt();
		}		
		for(int i=0; i<N; i++)
		{
		    sumArray[i] = ArrayA[i] + ArrayB[i];
		}
		for(int i=0; i<N; i++) 
		{
			System.out.print(sumArray[i] + " ");
		}       
        System.out.println();
		s.close();
	}
}