//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int search(vector<int>& arr, int key) {
        // complete the function here
        int l=0,m,h=arr.size()-1;
        while(l<=h){
            m=l+(h-l)/2;
            if(key==arr[m])
            return m;
            
            if(arr[m]>=arr[l]){
                if(key>=arr[l]&&key<arr[m])
                h=m-1;
                else
                l=m+1;
            }else{
                if(key>arr[m]&&key<=arr[h])
                l=m+1;
                else
                h=m-1;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(arr, key) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends