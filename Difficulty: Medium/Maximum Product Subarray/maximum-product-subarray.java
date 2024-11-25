//{ Driver Code Starts
import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int tc = Integer.parseInt(br.readLine());
        while (tc-- > 0) {
            String[] inputLine = br.readLine().split(" ");
            int n = inputLine.length;
            int[] arr = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = Integer.parseInt(inputLine[i]);
            }
            System.out.println(new Solution().maxProduct(arr));
        }
    }
}

// } Driver Code Ends

class Solution {
    // Function to find maximum product subarray
    int maxProduct(int[] arr) {
        
       int temp1 = 1;
       int temp2 = 1;
       int res = -11;
       
       int n = arr.length;
       
       for(int i=0; i<n; i++){
           
           temp1*=arr[i];
           temp2*=arr[n-i-1];
           
           if(temp1 == 0) temp1 = 1;
           if(temp2 == 0) temp2 = 1;
           
           if(temp1>res) res = temp1;
           if(temp2>res) res = temp2;
           
       }
       return res;
       
    }
}