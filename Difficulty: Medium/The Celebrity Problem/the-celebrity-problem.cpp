//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    int celebrity(vector<vector<int> >& mat) {
        
       for(int i=0;i<mat.size();i++){
           bool flg=true;
           for(int j=0;j<mat.size();j++)
          if((i!=j)&&((mat[i][j])||(!mat[j][i])))flg=false;
           if(flg)return i;}
           
    return -1;}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int> > M(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> M[i][j];
            }
        }
        Solution ob;
        cout << ob.celebrity(M) << endl;
    }
}

// } Driver Code Ends