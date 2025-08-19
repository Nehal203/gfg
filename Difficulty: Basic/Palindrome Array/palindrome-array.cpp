
class Solution {
  public:
    bool isPerfect(vector<int> &arr) {
        // code here
        int start=0;
        int end=arr.size()-1;
        while(start<end){
            if(arr[start]!=arr[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
