//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
        int rows = mat.size();
    int cols = mat[0].size();
    vector<int> output;
    for (int k = 0; k < rows + cols - 1; k++) {
        if (k % 2 == 0) { 
            for (int i = min(k, rows - 1); i >= 0 && k - i < cols; i--) {
                output.push_back(mat[i][k - i]);
            }
        } else { 
            for (int i = min(k, cols - 1); i >= 0 && k - i < rows; i--) {
                output.push_back(mat[k - i][i]);
            }
        }
    }
    return output;
    }
};


//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n;
        int k=0;
        //cin>>k;
        cin>>n;
        vector<vector<int>>mat(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> mat[i][j];
            }
        }
        Solution obj;
        vector<int>ans = obj.matrixDiagonally(mat);
        for(auto i: ans)cout << i << " ";
        cout << "\n";
        
       
    }
}
// } Driver Code Ends