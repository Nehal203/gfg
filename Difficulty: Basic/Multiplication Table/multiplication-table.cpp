// User function Template for C++
class Solution {
  public:
    vector<int> getTable(int n) {
        // Write Your Code here
        vector<int>res;
        for(int i=1;i<=10;i++){
            res.push_back(n*i);
        }
        return res;
    }
};