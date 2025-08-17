class Solution {
  public:
    vector<int> addOne(vector<int>& arr) {
        // code here
        int carry=1;
        for(int i=arr.size()-1;i>=0;i--){
            int sum=arr[i]+carry;
            arr[i]=sum%10;
            carry=sum/10;
        }
        if(carry){
            arr.insert(arr.begin(),carry);
        }
        return arr;
    }
};