//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
/*You are required to complete this method*/
class Solution
{
public:
    int subsequenceCount(string s, string t)
    {
        int n = s.length();
        int m = t.length();

        const int mod = 1e9 + 7;

        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

        for (int i = 0; i <= n; i++)
            dp[0][i] = 1;

        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                dp[i][j] = dp[i][j - 1];
                if (t[i - 1] == s[j - 1])
                    dp[i][j] = (dp[i][j] % mod + dp[i - 1][j - 1] % mod) % mod;
            }
        }

        return dp[m][n];
    }
};


 


//{ Driver Code Starts. 

//  Driver code to check above method
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string tt;
		cin>>s;
		cin>>tt;
		
		Solution ob;
		cout<<ob.subsequenceCount(s,tt)<<endl;
		
		
	}
  
}
// } Driver Code Ends