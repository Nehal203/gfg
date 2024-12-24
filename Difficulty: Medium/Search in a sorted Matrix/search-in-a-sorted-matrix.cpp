//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int findRow(vector<vector<int>> &mat, int x, int st, int en)
    {
        if(st>=en)
        return mat[st][0]>x ? st-1 : st;
        int mid = (st+en)/2;
        return mat[mid][0]==x ? mid : mat[mid][0]>x ? findRow(mat,x,st,mid-1) : findRow(mat,x,mid+1,en);
    }
    bool findCol(vector<int>&vec, int x, int st, int en)
    {
        if(st>en)
        return false;
        int mid = (st+en)/2;
        return vec[mid]==x ? true : vec[mid]>x ? findCol(vec,x,st,mid-1) : findCol(vec,x,mid+1,en);
    }
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        int r=mat.size(), c=mat[0].size();
        if(mat[0][0]>x || mat[r-1][c-1]<x)
        return false;
        return findCol(mat[findRow(mat,x,0,r-1)],x,0,c-1);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {

        int n, m;
        cin >> n >> m;
        vector<vector<int> > matrix(n);

        for (int i = 0; i < n; i++) {
            matrix[i].assign(m, 0);
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j];
            }
        }

        int x;
        cin >> x;
        Solution obj;
        if (obj.searchMatrix(matrix, x))
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends