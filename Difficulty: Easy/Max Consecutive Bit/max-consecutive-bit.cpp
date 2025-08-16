class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int maxcount=0;
        int count=1;
        int n=arr.size();
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                count++;
                
            }
            else{
                maxcount=max(maxcount,count);
                count=1;
            }
        }
        return max(maxcount,count);
    }
};