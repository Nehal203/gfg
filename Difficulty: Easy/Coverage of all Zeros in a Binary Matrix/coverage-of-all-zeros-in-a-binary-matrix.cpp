//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int findCoverage(vector<vector<int>> &matrix)
{
    int count = 0;
    int r = matrix.size();
    int c = matrix[0].size();
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (matrix[i][j] == 0)
            {
                if (i >= 1)
                {
                    count += matrix[i - 1][j];
                }
                if (i < r - 1)
                {
                    count += matrix[i + 1][j];
                }
                if (j >= 1)
                {
                    count += matrix[i][j - 1];
                }
                if (j < c - 1)
                {
                    count += matrix[i][j + 1];
                }
            }
        }
    }
    return count;
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
        int ans = obj.findCoverage(matrix);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends