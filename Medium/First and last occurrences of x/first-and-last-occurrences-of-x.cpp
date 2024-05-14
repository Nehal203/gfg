//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    
    public:
    int first_occur(int arr[], int n , int x )
    {
        int start=0;
        int end=n-1;
        int ans=-1;
        int mid=start+(end-start)/2;
        
        while(start<=end)
        {
            if(arr[mid]==x)
            {
                ans=mid;
                end=mid-1;
            }
            else if(arr[mid]<x)
            {
                start=mid+1;
            }
            else if(arr[mid]>x)
            {
                end=mid-1;
            }
            mid=start+(end-start)/2;
            
        }
        return ans;
    }
    int last_occur(int arr[], int n , int x )
    {
        int start=0;
        int end=n-1;
        int ans=-1;
        int mid=start+(end-start)/2;
        
        while(start<=end)
        {
            if(arr[mid]==x)
            {
                ans=mid;
                start=mid+1;
            }
            else if(arr[mid]<x)
            {
                start=mid+1;
            }
            else if(arr[mid]>x)
            {
                end=mid-1;
            }
            mid=start+(end-start)/2;
            
        }
        return ans;
    }
    vector<int> find(int arr[], int n , int x )
    {
        vector<int> v;
        v.push_back(first_occur(arr,n,x));
        v.push_back(last_occur(arr,n,x));
        
        return v;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends