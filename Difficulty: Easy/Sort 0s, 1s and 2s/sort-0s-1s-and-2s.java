//{ Driver Code Starts
import java.io.*;
import java.util.*;

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            String input = br.readLine();
            String[] inputArray = input.split("\\s+");
            int a[] = new int[inputArray.length];

            for (int i = 0; i < a.length; i++) a[i] = Integer.parseInt(inputArray[i]);

            Solution ob = new Solution();
            ob.sort012(a);

            for (int num : a) {
                System.out.print(num + " ");
            }
            System.out.println();
            System.out.println("~");
        }
    }
}


// } Driver Code Ends

class Solution {
    // Function to sort an array of 0s, 1s, and 2s
    public void sort012(int[] arr) {
        // code here
        int i=0,j=arr.length-1,in=0;
        while(i<=j){
            if(arr[i]==0){
                int t=arr[in];
                arr[in]=0;
                arr[i]=t;
                i++;
                in++;
                
            }
            else if(arr[i]==2){
                int t=arr[j];
                arr[j]=2;
                arr[i]=t;
            
                j--;
            }
            else
                i++;
        }
        return;
    }
}

//{ Driver Code Starts.
// } Driver Code Ends