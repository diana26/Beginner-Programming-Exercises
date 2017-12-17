import java.io.*;
import java.util.*;

public class Solution 
{
	static boolean isAnagram(String a, String b) 
	{
        char[] array1= a.toLowerCase().toCharArray(), array2= b.toLowerCase().toCharArray();
        int count[] = new int[26];
        if(array1.length != array2.length)
        return false;
        for(int i=0; i<array1.length; i++)
        {
            count[array1[i]-97]++;
            count[array2[i]-97]--;
        }
       
        for(int i=0; i<26; i++)
        
             if(count[i]!= 0)
                 return false;
                 
               return true;
	}
         public static void main(String[] args) 
		 {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
		 }


}    