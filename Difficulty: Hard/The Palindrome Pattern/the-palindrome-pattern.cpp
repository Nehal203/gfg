//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  
  // function to check whether a given string is palindrome or not
    bool isPalindrome(string s){
        string str=s;
        reverse(str.begin(),str.end());
        return str==s;
    }
    
    
    string pattern(vector<vector<int>> &arr) {
        // Code Here
        int n= arr.size();
        
        // for rows
        for (int i=0;i<n;i++){
            string s1 ="";
                for(int j=0;j<n;j++){
                    s1 += to_string(arr[i][j]);
                }
                
                if(isPalindrome(s1)){
                    return to_string(i)+" R";
                }
        }
        
        
        //for columns
        for (int i=0;i<n;i++){
            string s2 ="";
                for(int j=0;j<n;j++){
                    s2 += to_string(arr[j][i]);
                }
                
                if(isPalindrome(s2)){
                    return to_string(i)+" C";
                }
        }
        
        return "-1" ;
        
    }
};

//{ Driver Code Starts.

int main() {

    int t, n, i, j, flag, k;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                cin >> a[i][j];
        }
        Solution ob;
        cout << ob.pattern(a) << endl;
    }
    return 0;
}
// } Driver Code Ends