//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> FindExitPoint(int n, int m, vector<vector<int>>& matrix) {
    // Code here
    vector<pair<int,int>> dir = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};  // right down left up
    vector<int> ans;
    ans.push_back(0);
    ans.push_back(0);
    int i = 0, j = 0;
    int idx = 0;
    while(i < n && j < m && i >= 0 && j >= 0) {
        ans[0] = i;
        ans[1] = j;
        if(matrix[i][j] == 0) { 
            i += dir[idx].first;
            j += dir[idx].second;
            continue;
        } else {
            idx = (idx + 1) % 4;
            matrix[i][j] = 0;
            i += dir[idx].first;
            j += dir[idx].second;
        }
    }
    return ans;
 }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        Solution obj;
        vector<int> ans = obj.FindExitPoint(n, m, matrix);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends