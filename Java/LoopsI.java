import java.util.Scanner;
public class Solution {
	public static void Multiply(int n)
	{
		for(int i=1; i<=10; i++)
		{
			System.out.println(n + " "+ "x" + " " + i + " " + "=" + " " + n*i);
		}
	}
	public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        scan.close();
        Multiply(n);
}
}
