//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s){
        int max = INT_MIN;
        int min = INT_MAX;
        int flagMax = 0;
        unordered_map<char, int> maps;
        for (int i = 0; i < s.length(); i++){
            maps[s[i]]++;
        }
        for (const auto& pair: maps){
            if(pair.second > max) {
                max = pair.second;
                flagMax = 0;
            }
            else if (pair.second == max){
                flagMax = 1;
            }
            if(pair.second < min) {
                min = pair.second;
            }
        }
        if ((max == min || abs(max - min) == 1) && (!flagMax || max == min)) return true;
        return false;
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends