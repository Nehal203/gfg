//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxDistance(vector<int> &arr) {
        // Code here
        unordered_map <int, int> firstOccur;        
        int n = arr.size(), maxDist = 0;
        
        for(int i=0; i<n; i++)
        {
            if(firstOccur.find(arr[i]) != firstOccur.end())
            maxDist = max(maxDist, i - firstOccur[arr[i]]);
            
            else firstOccur[arr[i]] = i;
        }
        return maxDist;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);

        stringstream s1(input);
        int num;
        while (s1 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.maxDistance(arr) << endl;
    }
    return 0;
}
// } Driver Code Ends