//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
   vector<long long int> productExceptSelf(vector<long long int>& nums) {
        long long x = 1;
        int zeros=0;
        for(long long i:nums)
        {    if(i != 0)
                x *= i;
            else
                zeros++;
        }

        if(zeros>1) x = 0;
        for(int i = 0; i<nums.size(); i++)
        {
            if(zeros)
            {
                if(nums[i])
                    nums[i] = 0;
                else
                    nums[i] = x;
            }
            else
            {
                nums[i] = (x/nums[i]);
            }
        }
        return nums;
    }
};


//{ Driver Code Starts.
int main() {
    int t; // number of test cases
    cin >> t;
    while (t--) {
        int n; // size of the array
        cin >> n;
        vector<long long int> arr(n), vec(n);

        for (int i = 0; i < n; i++) // input the array
        {
            cin >> arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr); // function call

        for (int i = 0; i < n; i++) // print the output
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends