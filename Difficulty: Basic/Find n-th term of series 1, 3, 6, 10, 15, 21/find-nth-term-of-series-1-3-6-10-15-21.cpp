class Solution {
  public:
    int findNthTerm(int n) {
        // code here
        int ans=0;
        for(int i=0;i<=n;i++){
            ans+=i;
        }
        return ans;
    }
};