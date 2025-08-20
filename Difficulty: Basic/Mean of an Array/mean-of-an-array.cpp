class Solution {
  public:
    int findMean(vector<int>& arr) {
        // code here
        int sum=0;
        for(int num:arr){
            sum+=num;
        }
        return sum/arr.size();
    }
};