//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	string removeDuplicates(string str) {
        // code here
        string ans="";
        unordered_map<char,int>mapp;
        int n=str.length();
        
        for(int i=0;i<n;i++){
            if(mapp[str[i]]<1){
            mapp[str[i]]++;
            char c=str[i];
            ans.push_back(c);
            }
            
        }
        return ans;
      
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends