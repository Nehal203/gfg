//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    int longestSubseq(int n, vector<int> &a) {
   
    vector<vector<int>> dp(n, vector<int>(n + 1, -1)); 


    function<int(int, int)> rec = [&](int i, int p) -> int {
        if (i == n) return 0;
        if (p != -1 && dp[i][p] != -1) return dp[i][p];

        int tk = 0, nt = rec(i + 1, p);
        if (p == -1 || abs(a[i] - a[p]) == 1) tk = 1 + rec(i + 1, i);

        if (p == -1) return max(tk, nt);
        return dp[i][p] = max(tk, nt);  
    };

    return rec(0, -1);
}

};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        vector<int> a(n);
        Array::input(a, n);

        Solution obj;
        int res = obj.longestSubseq(n, a);

        cout << res << endl;
    }
}

// } Driver Code Ends