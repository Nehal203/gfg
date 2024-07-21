//{ Driver Code Starts
/* Driver program to test above function */

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int findMaxProduct(vector<int>& arr) 
    {
        long long int neg_prod = 1;
        long long int pos_prod = 1;
        long long int prod = 1;
        int counter = 0;
        sort(arr.begin(), arr.end());
        vector<int> temp;
        bool zero = false;
        if(arr.size() == 1)
            return arr[0];
        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i] < 0)
            {
                counter++;
                if(counter%2 == 0)
                {
                    for(int j = 0; j < temp.size(); j++)
                    {
                        neg_prod = (neg_prod*temp[j])%1000000007;
                        
                    }
                    neg_prod = neg_prod*arr[i];
                    temp.clear();
                }
                else
                {
                    temp.push_back(arr[i]);
                }
            }
            else if(arr[i] == 0)
            {
                zero = true;
            }
            else
            {
                pos_prod = (pos_prod*arr[i])%1000000007;
            }
            
        }
        if(neg_prod == 1 && pos_prod == 1 && counter == 0)
            return 0;
        else if(neg_prod == 1 && pos_prod == 1 && counter != 0)
            return neg_prod;
        return (neg_prod%1000000007)*(pos_prod%1000000007)%1000000007;
            
            
        // Write your code here
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        long long int ans = ob.findMaxProduct(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends