//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

  class Solution {
  public:
  int lps(string str){
        int n = str.length();
        int LPS[n];
        LPS[0] = 0;  // LPS[0] is always 0
    
        // calculate LPS[i] for i = 1 to n-1
        int len = 0;  // length of the previous longest prefix suffix
        int i = 1;
        while (i < n) {
            if (str[i] == str[len]) {
                len++;
                LPS[i] = len;
                i++;
            } else {
                if (len != 0) {
                    len = LPS[len-1];  // consider the previous LPS
                } else {
                    LPS[i] = 0;
                    i++;
                }
            }
        }
    
        // Return the maximum value in LPS array
        int max = LPS[n-1];
        return max;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;

        Solution ob;

        cout << ob.lps(str) << "\n";
    }

    return 0;
}

// } Driver Code Ends