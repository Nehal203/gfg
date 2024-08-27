//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    /*You are required to complete this method */
    int findMaxDiff(vector<int> &arr) {
        // Your code here
        int n = arr.size();
        vector<int>left;
        vector<int>right;
        stack<int>st;
        for(int i=0;i<n;i++){
            
            while(!st.empty() && st.top() >= arr[i]){
                st.pop();
            }
            if(st.empty()){
                left.push_back(0);
            }
            else{
                left.push_back(st.top());
            }
            st.push(arr[i]);
        }
        // for(auto it:left)cout<<it<<" ";
        // cout<<endl;
        while(!st.empty())st.pop();
        // st.clear();
        for(int i=n-1;i>=0;i--){
            
            while(!st.empty() && st.top() >= arr[i]){
                st.pop();
            }
            if(st.empty()){
                right.push_back(0);
            }
            else{
                right.push_back(st.top());
            }
            st.push(arr[i]);
        }
        // for(auto it:right)cout<<it<<" ";
        // cout<<endl;
        reverse(right.begin(),right.end());
        int maxi = INT_MIN;
        for(int i=0;i<left.size();i++)
            maxi = max(maxi,abs(left[i]-right[i]));
        return maxi;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.findMaxDiff(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends