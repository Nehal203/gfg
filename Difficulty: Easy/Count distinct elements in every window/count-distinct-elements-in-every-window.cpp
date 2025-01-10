//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here.
        vector<int> ans;
        
        
        unordered_map<int,int> um;
        int i=0;
        int n=arr.size();
        for(i=0;i<k;i++){
            um[arr[i]]++;
        }
        
        ans.push_back(um.size());
        
        while(i<n){
            um[arr[i]]++;
            um[arr[i-k]]--;
            
            if(um[arr[i-k]]==0)
                um.erase(arr[i-k]);
            
            ans.push_back(um.size());    
            
            i++;
        }
        
        return ans;
        
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
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution obj;
        vector<int> res = obj.countDistinct(arr, k);
        for (auto it : res)
            cout << it << " ";
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends