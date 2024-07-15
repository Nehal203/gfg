//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string num(vector<int>& arr, int d){
        string ans="";
        for(int i=0; i<d; ++i){
            ans+=(arr[i]+'0');
        }
        return ans;
    }
    string smallestNumber(int s, int d) {
        // code here
        long long int lv=9*d;
        vector<int> arr(d, 9);
        int i=0;
        while(lv>(long long int)s && i<d){
            if(arr[i]>1 && i==0){
                lv--;
                arr[i]--;
            }else if(arr[i]>0 && i>0){
                lv--;
                arr[i]--;
            }else{
                ++i;
            }
        }
        if(lv==(long long int)s){
            return num(arr, d);
        }else{
            return "-1";
        }
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int s, d;
        cin >> s >> d;
        Solution ob;
        cout << ob.smallestNumber(s, d) << "\n";
    }

    return 0;
}
// } Driver Code Ends