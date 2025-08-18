// User function Template for C++

class Solution {
  public:
    int product(int arr[], int n) {
        int count=1;
        for(int i=0;i<n;i++){
            count=count*arr[i];
        }
        return count;
    }
};