//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
     int swapNibbles(int n) {
        // code here
        int num=0;
        for(int i=0;i<8;i++)
        {
            if(n & 1<<i)
            {
                int x=(4+i)%8;
                num=num|(1<<x);
            }
        }
        return num;
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
        cout << ob.swapNibbles(n) << endl;
    }
    return 0;
}
// } Driver Code Ends