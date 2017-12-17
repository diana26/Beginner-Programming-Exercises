import java.util.Scanner;
public class Solution {
	 
	   public static void main(String[] args) {
		   
	        Scanner scan = new Scanner(System.in);
	        String s = scan.nextLine();
	        String str = s.replaceAll(",", "");
	        String str1 = str.replaceAll("\\W"," ");
	        
	        int count = 0;
	        for(int i=0; i<=str1.length()-1; i++)
	        {
	        	if (str1.charAt(i) == ' ' )
	            {
	                count++;
	            }
	        }
	        
	        System.out.print(count);
	        System.out.println();
	        for (String word : str1.split(" ")){
	        	
	            System.out.println(word);
	        }
	        scan.close();

	   										  }
}