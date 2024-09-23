//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int xori = 0, i = 1;
        for(auto it:arr){
            xori ^= it;
            xori ^= (i++);
        }
        int bit = xori & ~(xori-1);
        int xorA = 0,xorB = 0;
        for(auto it:arr){
            if(bit & it){
                xorA^=it;
            }else{
                xorB^=it;
            }
        }
        for(int i = 1;i<=arr.size();i++){
            if(i & bit){
                xorA^=i;
            }else{
                xorB ^= i;
            }
        }
        int count1 = 0,count2 = 0;
        for(auto it:arr){
            if(it == xorA)count1++;
            if(it == xorB) count2++;
        }
        if(count1 == 2) return {xorA,xorB};
        return {xorB, xorA};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends