//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int areAnagram(string S1, string S2) {
        // code here
        int n=S1.size();
        int m=S2.size();
        
        if(n!=m){
            return false;
        }
        sort(S1.begin(),S1.end());
        sort(S2.begin(),S2.end());
        
        for(int i=0;i<n;i++){
            if(S1[i]!=S2[i]){
                return false;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S1, S2;
        cin >> S1;
        cin >> S2;
        Solution ob;
        cout << ob.areAnagram(S1, S2) << endl;
    }
    return 0;
}

// } Driver Code Ends