class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        // Your code here
        int n=arr.size();
        if(n<3){
            return -1;
        }
        sort(arr.begin(),arr.end());
        return arr[n-3];
    }
};