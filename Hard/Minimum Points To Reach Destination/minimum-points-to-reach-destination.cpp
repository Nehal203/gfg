//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	public:
	int f(int i, int j, int n, int m, vector<vector<int>>& a, vector<vector<int>>& dp) {
        if (i >= n || j >= m) return 1e9;
        if (dp[i][j] != -1) return dp[i][j];
        int x = f(i + 1, j, n, m, a, dp);
        int y = f(i, j + 1, n, m, a, dp);
        int health = min(x, y);
        if (health == 1e9) health = 1;
        int ans = 0;
        if (health - a[i][j] > 0) ans = health - a[i][j];
        else ans = 1;
        return dp[i][j] = ans;
    }
	int minPoints(int n, int m, vector<vector<int>> a) {
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
        return f(0, 0, n, m, a, dp);
	}
};


//{ Driver Code Starts.
int main() 
{
   
   	int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;

        vector<vector<int>> a(m, vector<int>(n));

        for(int i = 0; i < m; i++)
        	for(int j = 0; j < n; j++)
        		cin >> a[i][j];

        

	    Solution ob;
	    cout << ob.minPoints(m,n,a) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends