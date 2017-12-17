import java.util.Scanner;

public class NumbersInRange 
{
	public static void main(String[] args) 
	{	    	    
		Scanner s = new Scanner(System.in);
		int L = s.nextInt();
		int R = s.nextInt();
		int[] myArray = new int[100];
        for(int i=L; i<=R; i++)
        {
        	myArray[i]=i;
            System.out.print(myArray[i]+" ");
        }
		s.close();
	}
}