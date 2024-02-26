//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
	    vector<string> result;
	    int n = s.length();
	    for(int i = 1; i <= (1 << n); i++){
	        string c;
	        for(int j = 0; j < n; j++){
	            if((i & (1 << j)) > 0)
	                c.push_back(s[j]);
	        }
	        if(c.length() > 0)
   		        result.push_back(c);
	    }
           sort(result.begin(), result.end());
	    return result;
}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends