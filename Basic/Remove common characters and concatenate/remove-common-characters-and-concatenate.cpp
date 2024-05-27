//{ Driver Code Starts
// C++ program Find concatenated string with 
// uncommon characters of given strings 
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends


class Solution
{
    public:
    //Function to remove common characters and concatenate two strings.
    string concatenatedString(string s1, string s2) 
    { 
        // Your code here
        set<char>set1(s1.begin(),s1.end());
        set<char>set2(s2.begin(),s2.end());
        
        string temp;
        for(int i=0;i<s1.size();i++){
            if(set2.find(s1[i])==set2.end()){
                temp=temp+s1[i];
            }
        }
        for(int i=0;i<s2.size();i++){
            if(set1.find(s2[i])==set1.end()){
                temp=temp+s2[i];
            }
        }
        return temp.empty()?"-1":temp;
    }

};

//{ Driver Code Starts.

/* Driver program to test above function */
int main() 
{ 
	int t;
	cin >> t;
	
	while(t--){
    	string s1, s2;
    	cin >> s1 >> s2;
    	Solution obj;
    	string res = obj.concatenatedString(s1, s2);
    	cout<<res<<endl;
	}
	return 0; 
}

// } Driver Code Ends