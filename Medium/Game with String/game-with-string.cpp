//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        vector<pair<char,int>> v(26);
        int n = s.length();
        
        for(int i=0; i<n; i++){
        	v[s[i]-'a'].first = s[i];
        	v[s[i] -'a'].second++;
        }
        	
        sort(v.begin(), v.end(), [](const auto& a, const auto& b) {
        return a.second > b.second;
            });
        set<char> st;
        for(int i=0; i<n; i++) st.insert(s[i]);
        int p = st.size();
        
        for(int i=0; i<k; i++)
        {
            v[0].second--;
            sort(v.begin(), v.end(), [](const auto& a, const auto& b) {
                return a.second > b.second;
            });
        }
        
        int ans = 0;
        for(int i=0; i<p; i++)
        {
            int a = v[i].second;
            ans += a*a;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends