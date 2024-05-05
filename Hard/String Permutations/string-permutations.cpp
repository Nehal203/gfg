//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    
    vector<string> permutation(string S)
    {
        //Your code here
        vector<string>result;
        per(S,0,result);
        sort(result.begin(),result.end());
        return result;
    }
    void  per(string S,int i,vector<string>&result){
        if(i==S.length()){
            result.push_back(S);
            return;
        }
        for(int j=i;j<S.length();j++){
            swap(S[i],S[j]);
            per(S,i+1,result);
            swap(S[i],S[j]);
        }
    }
};

// class Solution {
// public:
//     vector<string> permute(string s) {
//         vector<string> result;
//         permuteHelper(s, 0, result);
//         return result;
//     }

//     void permuteHelper(string s, int i, vector<string>& result) {
//         if (i == s.length()) {
//             result.push_back(s);
//             return;
//         }
//         for (int j = i; j < s.length(); j++) {
//             swap(s[i], s[j]);
//             permuteHelper(s, i + 1, result);
//             swap(s[i], s[j]); // Backtrack to restore the original string
//         }
//     }
// };

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends