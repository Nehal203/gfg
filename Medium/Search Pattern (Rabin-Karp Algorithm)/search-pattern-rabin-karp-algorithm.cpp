//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
    public:
        vector <int> search(string pattern, string text) {
            vector<int> ans;
            auto ind=text.find(pattern);
            while(ind != string::npos) {
                ans.push_back(ind+1);
                ind=text.find(pattern, ind+1);
            }
            return ans;
        }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends