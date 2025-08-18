
class Solution {
  public:
    vector<int> findSum(int n) {
        // Code here
        int even=0;
        int odd=0;
        for(int i=0;i<=n;i++){
            if(i%2==0){
                even+=i;
            }
            else{
                odd+=i;
            }
        }
        return {odd,even};
    }
};