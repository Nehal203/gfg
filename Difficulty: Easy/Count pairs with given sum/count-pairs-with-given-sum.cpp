//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int i=0, j=n-1;
        int sum=0;
        int cnt=0;
        while(i<j){
            if(arr[i]==arr[j] && 2*arr[i]==target){ 
            int m = j-i+1;
            int l = m*(m-1)/2;
            return cnt+=l;
            }
            sum =arr[i]+arr[j];
            if(sum==target){
                int k=j;
                cnt++;
                while(arr[k]==arr[k-1]&& k>i){
                cnt++;
                k--;
                }
                i++;
            }else if(sum > target){
                j--;
            }else{
                i++;
            }
        }
        return cnt;
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
        int target;
        cin >> target;
        cin.ignore();
        Solution ob;
        int res = ob.countPairs(arr, target);

        cout << res << endl << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends