class Solution {
  public:
    bool isPerfect(vector<int>& arr) {
        // code here
        int n=arr.size();
        int i=1;
        while(arr[i]>arr[i-1] && i<n){
            ++i;
        }
        while(arr[i]==arr[i-1] && i<n){
            ++i;
        }
        while(arr[i]<arr[i-1] &&i<n){
            ++i;
        }
        return (i==n);
    }
};
