//{ Driver Code Starts
#include <algorithm>
#include <cstdio>
#include <iostream>
//#include<Windows.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    /*You are requried to complete this method */
    long long max_Books(int arr[], int n, int k) {
        // Your code here
        long long sum=0;
        long long maxsum=0;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=k)
            {
                sum=sum+arr[i];
            }
            else if(arr[i]>k)
            {
                sum=0;
            }
           maxsum=max(maxsum,sum); 
        }
        return maxsum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int ar[n];
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
        }
        Solution ob;
        cout << ob.max_Books(ar, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends