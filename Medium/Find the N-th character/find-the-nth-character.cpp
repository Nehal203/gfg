//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
        //code here
        int flip=0,i,p;
        p=pow(2,r);
        i=n%p;
        n/=p;
        while(i>0){
            if(i%2) flip++;
            i/=2;
        }
        if(s[n]=='0'){
            if(flip%2) return '1';
            else return '0';
        }
        else {
            if(flip%2) return '0';
            else return '1';
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, N;
        string S;
        cin >> S >> R >> N;
        Solution ob;
        cout << ob.nthCharacter(S, R, N) << endl;
    }
    return 0;
}
// } Driver Code Ends