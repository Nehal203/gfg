//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int DivisibleByEight(string s)
    {
        //code here
        int len = s.length();
        int num=0;
        int cnt=0;
        int fact=1;
        for(int i=len-1; i>=0 && cnt<3; i--)
        {
            num+=(s[i]-'0')*fact;
            //cout << num << endl;
            fact*=10;
            cnt++;
        }
        return num%8==0?1:-1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends