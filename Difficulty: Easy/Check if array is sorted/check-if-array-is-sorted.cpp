//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  bool sorted(vector<int>&arr,int idx){
      if(idx==arr.size()-1){
          return true;
      }
      if(arr[idx]<=arr[idx+1]){
          return sorted(arr,idx+1);
      }
      else{
          return false;
      }
  }
    bool arraySortedOrNot(vector<int>& arr) {
        // code here
        int idx=0;
        sorted(arr,idx);
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        bool ans = ob.arraySortedOrNot(nums);
        cout << (ans ? "true" : "false") << endl;
    }
    return 0;
}

// } Driver Code Ends