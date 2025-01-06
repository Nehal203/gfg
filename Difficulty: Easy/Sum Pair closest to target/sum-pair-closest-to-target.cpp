//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        // code here
        
        vector<int> ans;
        int d = INT_MAX;
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int i = 0;
        int j = n-1;
        while(i<j){
            int sum = arr[i]+arr[j];
            if(d>(abs(target-sum))){
                d = abs(target-sum);
                ans = {arr[i],arr[j]};
            }
            if(sum>=target){
                j--;
            }else{
                i++;
            }
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int target = stoi(ks);
        Solution ob;
        vector<int> ans = ob.sumClosest(arr, target);
        if (ans.empty()) {
            cout << "[]";
        } else {
            for (auto it : ans) {
                cout << it << " ";
            }
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends