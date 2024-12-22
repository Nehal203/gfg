//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        // your code here
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++){
            if(mat[i][m-1]>=x && mat[i][0]<=x){
                if(binSearch(mat,i,x)) return true;
            }
        }
        return false;
    }
    bool binSearch(vector<vector<int>> &mat, int row,int x){
        int start=0;
        int end=mat[0].size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(mat[row][mid]==x) return true;
            else if(mat[row][mid]<x){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return false;
        
    }


};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r, vector<int>(c, 0));
        int x;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }
        cin >> x;
        Solution ob;
        bool an = ob.matSearch(matrix, x);
        if (an)
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends