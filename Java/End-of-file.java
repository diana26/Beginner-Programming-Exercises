import java.io.*;
import java.util.*;

public class Solution {

     public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int numbers = 1;
        while(scan.hasNext())
        {
        	String x = scan.nextLine();
        	System.out.println(numbers + " " + x);
        	numbers++;
        }
     }
}