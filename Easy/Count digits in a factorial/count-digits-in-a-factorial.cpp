//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int facDigits(int N){
        //code here
        double ans=0;
        for(int i=1;i<=N;i++){
            ans+=(log10(i));
        }
        return (floor(ans)+1);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.facDigits(n)<<"\n";
       
        
    }
    return 0;
}
// } Driver Code Ends