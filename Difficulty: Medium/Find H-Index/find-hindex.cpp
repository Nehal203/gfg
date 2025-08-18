class Solution {
  public:
    bool possible(vector<int>& citations,int value){
        int ans=0;
        for(int i=0;i<citations.size();i++){
            if(citations[i]>=value&&citations.size()-i>=value) return true;
        }
        return false;
    }
    int hIndex(vector<int>& citations) {
        // code here
        sort(citations.begin(),citations.end());
        int n=citations.size();
        int ans=0;
        int left=0,right=*max_element(citations.begin(),citations.end());
        while(left<=right){
            int mid=left+(right-left)/2;
            if(possible(citations,mid)){
                ans=mid;
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return ans;
    }
};