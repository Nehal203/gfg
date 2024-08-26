//{ Driver Code Starts
//Initial Template for Java

import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine().trim());
        while(T-->0)
        {
            String s = br.readLine().trim();
            Solution ob = new Solution();
            List<String> ans = ob.AllPossibleStrings(s);
            for(String i: ans)
                System.out.print(i + " ");
            System.out.println();
            
        }
    }
}

// } Driver Code Ends


//User function Template for Java

class Solution
{
    public static void Poss(String s,int idx,String newString,List<String>result){
        if(idx==s.length()){
            if(!newString.isEmpty()){
                result.add(newString);
            }
            return;
        }
        char currchar=s.charAt(idx);
        Poss(s,idx+1,newString+currchar,result);
        Poss(s,idx+1,newString,result);
    }
    public List<String> AllPossibleStrings(String s)
    {
        // Code here
        // int idx;
        List<String>result=new ArrayList<>();
        Poss(s,0,"",result);
        Collections.sort(result);
        return result;
        // return a;
    }
}