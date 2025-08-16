class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=0){
                arr[count++]=arr[i];
            }
        }
        while(count<arr.size()){
            arr[count++]=0;
        }
    }
};