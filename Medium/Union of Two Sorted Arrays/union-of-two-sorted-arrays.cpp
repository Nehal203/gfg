//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        vector<int>ans;
        int i=0,j=0;
        bool flag;
        while(i<n && j<m)
        {
            if(i>0 && arr1[i]==arr1[i-1])
            {
                i++;
                flag=1;
            }
            if(j>0 && arr2[j]==arr2[j-1])
            {
                j++;
                flag = 1;
            }
            
            if(flag)
            {
                flag = 0;
                continue;
            }
           if(arr1[i]<arr2[j])
           {
               ans.push_back(arr1[i++]);
           }
           else if(arr2[j]<arr1[i])
           {
               ans.push_back(arr2[j++]);
           }
           else if(arr1[i]==arr2[j])
           {
               ans.push_back(arr1[i]);
               i++;
               j++;
           }
        }
        
        while(i<n)
        {
             if(i==0) ans.push_back(arr1[i]);
            if(i>0 && arr1[i]!=arr1[i-1])
            {
                 ans.push_back(arr1[i]);
            }
            i++;
           
        }
        while(j<m)
        {
            if(j==0) ans.push_back(arr2[j]);
            
            if(j>0 && arr2[j]!=arr2[j-1])
            {
                 ans.push_back(arr2[j]);
            }
            j++;
        }
        
        return ans;
    }


};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends