//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        int n = a.size() ;
        int m = b.size() ;
        if(n < m) return kthElement(b , a , k) ;
        int s = 0 ;
        int e = min(m , k) ;
        
        while(s <= e){
            int mid1 = s + (e - s) / 2 ;
            int mid2 = k - mid1 ;
            if(mid2 > n){
                s = mid1 + 1 ;
                continue ;
            }
            int a1 = -1 ;
            if(mid2 > 0) a1 = a[mid2 - 1] ;
            int a2 = INT_MAX ;
            if(mid2 < n) a2 = a[mid2] ;
            int b1 = -1 ;
            if(mid1 > 0) b1 = b[mid1 - 1] ;
            int b2 = INT_MAX ;
            if(mid1 < m) b2 = b[mid1] ;
            if(a2 >= b1 && b2 >= a1) return max(b1 , a1) ;
            else if(a2 < b1) e = mid1 - 1 ;
            else s = mid1 + 1 ;
        }
        return -1 ;
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m, k;
        cin >> k;
        cin.ignore();
        string input;
        int num;
        vector<int> a, b;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num) {
            b.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(a, b, k) << endl << "~\n";
    }
    return 0;
}
// } Driver Code Ends