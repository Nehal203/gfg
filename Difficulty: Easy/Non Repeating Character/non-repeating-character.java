//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.lang.*;
import java.util.*;

class Driverclass {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            String st = sc.next();

            char ans = new Solution().nonrepeatingCharacter(st);

            if (ans != '$')
                System.out.println(ans);
            else
                System.out.println(-1);
        }
    }
}

// } Driver Code Ends


// User function Template for Java

class Solution {
    // Function to find the first non-repeating character in a string.
    static char nonrepeatingCharacter(String s) {
        // Your code here
        char[] c=s.toCharArray();
        for(int i=0;i<c.length;i++){
            int count=0;
            for(int j=0;j<c.length;j++){
                if(c[i]==c[j]){
                    count++;
                }
            }
            if(count==1){
                return c[i];
            }
        }
        return '$';
    }
}
