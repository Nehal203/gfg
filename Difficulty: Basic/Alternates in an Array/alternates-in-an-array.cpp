
class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {
        // code here
        vector<int>res;
        for(int i=0;i<arr.size();i+=2){
            res.push_back(arr[i]);
        }
        return res;
    }
};