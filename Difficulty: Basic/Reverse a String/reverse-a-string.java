//{ Driver Code Starts
//Initial Template for Java

import java.util.*;
import java.io.*;
import java.lang.*;

class Driver
{
    public static void main(String args[])throws IOException
    {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        
        while(t-- >0)
        {
            String str = read.readLine();
            System.out.println(new Reverse().reverseWord(str));
        }
    }
}
// } Driver Code Ends


//User function Template for Java


class Reverse
{
    // Complete the function
    // str: input string
    public static String reverseWord(String str)
    {
        StringBuilder sb=new StringBuilder(str);
        // Reverse the string str
        for(int i=0;i<sb.length()/2;i++){
            int front=i;
            int back=sb.length()-i-1;
            
            char frontchar=sb.charAt(front);
            char backchar=sb.charAt(back);
            
            sb.setCharAt(front,backchar);
            sb.setCharAt(back,frontchar);
        }
        return sb.toString();
    }
}