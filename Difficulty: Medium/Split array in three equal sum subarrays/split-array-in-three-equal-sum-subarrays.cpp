//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
//  Class Solution to contain the method for solving the problem.
class Solution {

  public:
    vector<int> findSplit(vector<int>& arr) {
        vector<int> ans;
        int n = arr.size();
        unordered_map<int,int> m;
        int sum = 0;
        for(int i = 0;i<n;i++){
             sum+=arr[i];
             m[sum] = i;
        }
        if(sum%3 != 0 ||(m.find(sum/3) == m.end() || m.find(2*sum/3) == m.end())) return {-1,-1};
        ans.push_back(m[sum/3]);
        ans.push_back(m[2*sum/3]);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int test_cases;
    cin >> test_cases;
    cin.ignore();
    while (test_cases--) {
        string input;
        vector<int> arr;

        // Read the array from input line
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        // Solution instance to invoke the function
        Solution ob;
        vector<int> result = ob.findSplit(arr);

        // Output result
        if (result[0] == -1 && result[1] == -1) {
            cout << "false" << endl;
        } else {
            cout << "true" << endl;
        }
    }
    return 0;
}

// } Driver Code Ends