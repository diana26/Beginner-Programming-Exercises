import java.util.Scanner;
public class SumOfN 
{
	public static void main(String[] args) 
	{
		Scanner s = new Scanner(System.in);	
		int N = s.nextInt();
		int[] numArray = new int[N];		
		int sum = 0;
		for(int i=0; i<N; i++)
		{
			numArray[i] = s.nextInt(); // Get the input
		}
	    for(int j=0; j<N; j++)
	    {
	        int square = numArray[j]*numArray[j];
	        sum +=square;
	    }
		System.out.print(sum);
		s.close();
	}

}