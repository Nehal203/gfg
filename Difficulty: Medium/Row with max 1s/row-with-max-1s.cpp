//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int> > arr) {
        int currColumn = arr[0].size()-1,currRow = 0,ans = -1;
        while(currColumn >= 0 and currRow < arr.size()){
            while(currColumn >= 0 and arr[currRow][currColumn]==1){
                ans = currRow;
                currColumn--;
            }
            if(currColumn < 0){
                return currRow;
            }
            else{
                currRow++;
            }
        }
        return ans;
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
        auto ans = ob.rowWithMax1s(arr);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends