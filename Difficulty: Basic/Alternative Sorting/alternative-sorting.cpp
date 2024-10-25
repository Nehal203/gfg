//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {

  public:
    vector<int> alternateSort(vector<int>& arr) 
    {
        int n=arr.size();
        sort(arr.begin(), arr.end());
        int maxi=*max_element(arr.begin(), arr.end())+1;
        int j=n-1;
        for(int i=0; i<n; i+=2)
        {
            arr[i]=arr[i]+(arr[j]%maxi)*maxi;
            j--;
        }
        
        j=0;
        for(int i=1; i<n; i+=2)
        {
            arr[i]=arr[i]+(arr[j]%maxi)*maxi;
            j++;
        }
        
        for(int i=0; i<n; i++)
        {
            arr[i]/=maxi;
        }
        
        return arr;
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
        Solution obj;
        vector<int> ans = obj.alternateSort(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends