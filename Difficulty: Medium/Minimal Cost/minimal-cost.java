//{ Driver Code Starts
// Initial Template for Java
import java.io.*;
import java.lang.*;
import java.util.*;


// } Driver Code Ends
// User function Template for Java

class Solution {
    public int minimizeCost(int k, int arr[]) {
        // code here
        int n=arr.length;
        // no need to jump
        if(n<2) 
        return 0;
        //only when one jump is needed
        if(k>=n-1)
        return Math.abs(arr[n-1]-arr[0]);
        int[] dp = new int[n];
        dp[0]=0;
        //dp[1]=Math.abs(dp[1]-dp[0]);
        //dp[2]=Math.min(dp[1]+Math.abs(arr[2]-arr[1]), dp[0]+Math.abs(arr[2]-arr[0]));
        //dp[3]=Math.min(dp[0]+Math.abs(arr[3]-arr[0]), dp[1]+Math.abs(arr[3]-arr[1]), dp[2]+Math.abs(arr[3]-arr[2]));
        //let's genera;ize this
        for(int i=1;i<n;i++)
        {
            int min=Integer.MAX_VALUE;
            for(int j=i-1;j>=i-k&&j>=0; j--)
            min = Math.min(min, dp[j]+Math.abs(arr[i]-arr[j]));
            dp[i]=min;
        }
        return dp[n-1];
    }
}


//{ Driver Code Starts.

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        while (t-- > 0) {
            int k = Integer.parseInt(br.readLine());
            String line = br.readLine();
            String[] tokens = line.split(" ");

            // Create an ArrayList to store the integers
            ArrayList<Integer> array = new ArrayList<>();

            // Parse the tokens into integers and add to the array
            for (String token : tokens) {
                array.add(Integer.parseInt(token));
            }

            int[] arr = new int[array.size()];
            int idx = 0;
            for (int i : array) arr[idx++] = i;
            Solution obj = new Solution();
            int res = obj.minimizeCost(k, arr);

            System.out.println(res);
        }
    }
}
// } Driver Code Ends