//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
   int maxWater(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<int> lMaxi(n,-1);
        
        lMaxi[0]=arr[0];
        for(int i=1;i<n;i++){
            lMaxi[i]=max(lMaxi[i-1] , arr[i]);
        }
        
        
        vector<int> rMaxi(n,-1);
        rMaxi[n-1]=arr[n-1];
        
        for(int i=n-2;i>=0;i--){
            rMaxi[i]=max(rMaxi[i+1] , arr[i]);
        }
        
        
        int ans=0;
        for(int i=0;i<n;i++){
            int mini=min(lMaxi[i] , rMaxi[i]);
            if(mini > arr[i])
                ans+=(mini - arr[i]);
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

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends