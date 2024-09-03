//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	public:
	int solve(string& s1,string& s2,int i,int j,vector<vector<int>>& dp){
	    if(i >= s1.size() || j >= s2.size()){
	        return 0;
	    }
	    if(dp[i][j] != -1){
	        return dp[i][j];
	    }
	    
	    int op1 = 0,op2 = 0,op3 = 0;
	    if(s1[i] == s2[j]){                                //If the character gets match
	        op1 = 1+solve(s1,s2,i+1,j+1,dp);
	    }
	    else{                                              //If the character does not match
	        op2 = solve(s1,s2,i+1,j,dp);
	        op3 = solve(s1,s2,i,j+1,dp);
	    }
	    
	    return dp[i][j] = max(op1,max(op2,op3));        //Finally returning the Maximum of All
	}
	int minOperations(string str1, string str2){
	    vector<vector<int>> dp(str1.size(),vector<int>(str2.size(),-1));
	    int sol = solve(str1,str2,0,0,dp);
	    
	    int del = str1.size()-sol;
	    int ins = str2.size()-sol;
	    
	    return del+ins;
	} 
}; 

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends