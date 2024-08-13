//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution {
  public:
    long long int floorSqrt(long long int n) {
        
        // 1). First Approach O(logn)
      
        if(n==1) return 1;
        for(long long i = 1;i<=n/2;i++)
        {
            if(i*i<=n && (i+1) *(i+1)>n) return i;
        }

        // 2).Using floor() funtion 
        //   return floor(pow(n,0.5));
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}

// } Driver Code Ends