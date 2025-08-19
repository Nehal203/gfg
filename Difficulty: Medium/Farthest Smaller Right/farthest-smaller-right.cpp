class Solution {
   public:
    void bs(int l, int r, int& temp, vector<int>& lowestFromRight, int& ele){
        while(l<=r){
            int m = l + (r-l)/2;
            if(lowestFromRight[m] < ele){
                temp = m;
                l = m+1;
            }else{
                r = m-1;
            }
            
        }
        return;
    }
  
    void findLowestFromRight(vector<int>& lowestFromRight, vector<int>& arr){
        int n = arr.size();
        lowestFromRight[n-1] = arr[n-1];
        
        for(int i=n-2;i>=0;i--){
            lowestFromRight[i] = min(lowestFromRight[i+1], arr[i]);
        }
        return;
    }
  
    vector<int> farMin(vector<int>& arr) {
        // code here
        
        int n = arr.size();
        
        //lowest Right Array
        vector<int> lowestFromRight(n, -1);
        findLowestFromRight(lowestFromRight, arr);
        
        
        vector<int> ans(n, -1);
        
        //Binary Search
        for(int i=0;i<n;i++){
            int temp = -1;
            bs(i+1, n-1, temp, lowestFromRight, arr[i]);
            ans[i] = temp;
        }
        
        return ans;
    }
};