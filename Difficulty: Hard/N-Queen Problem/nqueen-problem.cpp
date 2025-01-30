//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
  vector<vector<int>>ans;
    bool check(int i,int j,int n,vector<vector<int>> &grid){
        //row,col,left upper diagonal,right upper diagonal
        
        //row
        for(int col=0;col<j;col++){ if(grid[i][col]==1) return 0;}
        //col
        for(int row=0;row<i;row++){ if(grid[row][j]==1) return 0;}
        
        //upper left diagonal
        int a=i,b=j;
        while(a>-1 && b>-1){
            a--; b--;
            if(a>-1 && b>-1)
            if(grid[a][b]==1) return 0;
        }
        
         a=i,b=j;
        while(a>-1 && a<n && b>-1 && b<n){
            a++; b--;
            if(a>-1 && a<n && b>-1 && b<n)
            if(grid[a][b]==1) return 0;
        }
       
        return 1;
    }
    void backtrack(int col,vector<vector<int>>& grid,vector<int>& path,int n){
        if(path.size()==n){
            ans.push_back(path);
            return;
        }
        
        //row traverse
        for(int i=0;i<n;i++){
            if(check(i,col,n,grid)){
                grid[i][col]=1; path.push_back(i+1);
                backtrack(col+1,grid,path,n);
                grid[i][col]=0; path.pop_back();
            }
        }
        return;
    }
    vector<vector<int>> nQueen(int n) {
        // code here
        if(n==1) return {{1}};
        
        vector<vector<int>>grid(n,vector<int>(n,0));
        vector<int>path;
        backtrack(0,grid,path,n);    
        if(ans.size()==0) return {};
        return ans;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if (ans.size() == 0)
            cout << -1 << "\n";
        else {
            sort(ans.begin(), ans.end());
            for (int i = 0; i < ans.size(); i++) {
                cout << "[";
                for (int u : ans[i])
                    cout << u << " ";
                cout << "] ";
            }
            cout << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends