//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  int mod = 1e9 + 7;
  private:
   int fun(int i,int prev,int flag,int n,vector<vector<vector<int>>> &dp){
       if(i==n){
           if(flag) return 1;
           else return 0;
       }
       
       if(dp[i][prev][flag]!=-1) return dp[i][prev][flag];
       
       int pick = 0;
       int notPick=0;
       if(prev==0){
           pick=fun(i+1,1,flag,n,dp); // pick means we add the 1 into string..so prev becomes 1 for next string element
           notPick=fun(i+1,0,flag,n,dp); // notPick means we add the 0 into string 
       }else{
           pick=fun(i+1,1,1,n,dp);
           notPick=fun(i+1,0,flag,n,dp);
       }
       return dp[i][prev][flag] = (pick%mod + notPick%mod)%mod;
   }
  public:
    int numberOfConsecutiveOnes(int n) {
        // code here
        
        // simple solution without DP using the pattern observation
        // int prev2=0;
        // int prev=1;
        // int ans=1;
        // for(int i=3;i<=n;i++){
        //     int add = (prev2 + prev)%mod;
        //     ans = ((2*ans)%mod + add)%mod;
        //     prev2=prev;
        //     prev=add;
        // }
        // return ans%mod;
        
        //using the DP
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(2,vector<int>(2,-1)));
        return fun(0,0,0,n,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.numberOfConsecutiveOnes(N) << endl;
    }
    return 0;
}

// } Driver Code Ends