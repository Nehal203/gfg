//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  
    void set_zero_row(set<int>& st,vector<vector<int>> &vec,int &n){
        for(auto & i : st){
            for(int j = 0 ; j < n ; j++)
                vec[j][i]=0;
        }
    }
    void set_zero_col(set<int>& st,vector<vector<int>> &vec,int& m){
        for(auto & i : st){
            for(int j = 0 ; j < m ; j++)
                vec[i][j]=0;
        }
    }
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        
      int   n = mat.size();
       int  m = mat[0].size();
         set<int> st_r;
         set<int> st_c;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(mat[i][j]==0) {
                    st_r.insert(j);
                    st_c.insert(i);
                }
            }
        }
        set_zero_row(st_r,mat,n);
        set_zero_col(st_c,mat,m);
    }
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        ob.setMatrixZeroes(arr);
        for (auto x : arr) {
            for (auto y : x)
                cout << y << " ";
            cout << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends