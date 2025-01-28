//{ Driver Code Starts
import java.io.*;
import java.lang.*;
import java.util.*;

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter out = new PrintWriter(System.out);
        int t = Integer.parseInt(br.readLine().trim());
        while (t-- > 0) {
            String S = br.readLine().trim();
            Solution obj = new Solution();
            ArrayList<String> ans = obj.findPermutation(S);
            Collections.sort(ans);
            for (int i = 0; i < ans.size(); i++) {
                out.print(ans.get(i) + " ");
            }
            out.println();

            out.println("~");
        }
        out.close();
    }
}

// } Driver Code Ends


class Solution {
    public ArrayList<String> findPermutation(String s) {
        // Code here
        HashSet<String>set=new HashSet<>();
        ArrayList<String>list=new ArrayList<>();
        permute(s,set,0,s.length());
        for(String ss:set){
            list.add(ss);
        }
        return list;
    }
    public void permute(String s,HashSet<String>set,int l,int r){
        if(l==r){
            set.add(s);
            return;
        }
        for(int i=l;i<r;i++){
            s=swap(s,l,i);
            permute(s,set,l+1,r);
            s=swap(s,l,i);
        }
    }
    public String swap(String s,int l,int i){
        StringBuilder str=new StringBuilder(s);
        char ch1=s.charAt(l);
        char ch2=s.charAt(i);
        str.setCharAt(l,ch2);
        str.setCharAt(i,ch1);
        return str.toString();
    }
}

