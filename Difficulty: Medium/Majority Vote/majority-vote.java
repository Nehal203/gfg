//{ Driver Code Starts
import java.io.*;
import java.util.*;
import java.util.Collections;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine(); // Consume the newline character

        while (t-- > 0) {
            String s = sc.nextLine();
            String[] parts = s.split(" ");
            List<Integer> nums = new ArrayList<>();
            for (String part : parts) {
                nums.add(Integer.parseInt(part));
            }
            Solution ob = new Solution();
            List<Integer> ans = ob.findMajority(nums);
            for (int num : ans) {
                System.out.print(num + " ");
            }
            System.out.println();
        }
        sc.close();
    }
}
// } Driver Code Ends


class Solution {
    // Function to find the majority elements in the array
    public List<Integer> findMajority(List<Integer> nums) {
        // answer list
        List<Integer> ans = new ArrayList<>();
        //no. of votes for majority
        int mVotes = nums.size()/3;
        //map to map candidate with no. of votes
        Map<Integer, Integer> map = new HashMap<>();
        for(int i : nums){
            map.put(i, map.getOrDefault(i,0)+1);
        }
        //adding candidate who get more than majority into answer list
        for(Integer key : map.keySet()){
            if(map.get(key)>mVotes){
                ans.add(key);
            }
        }
        
        if(ans.size() == 0){
            ans.add(-1);
        }
        
        Collections.sort(ans);
        
        return ans;
    }
}
