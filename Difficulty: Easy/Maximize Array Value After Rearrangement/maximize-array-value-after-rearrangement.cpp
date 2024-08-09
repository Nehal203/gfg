//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int Maximize(vector<int> arr) {
        int MOD= 1e9+7;
        long long temp{0};
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            temp += i*1LL*arr[i]; // typecasting was the trick in this question
        }
        return temp%MOD;
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
        //  cin.ignore();
        int n = arr.size();
        Solution ob;
        cout << ob.Maximize(arr) << endl;
    }
}
// } Driver Code Ends