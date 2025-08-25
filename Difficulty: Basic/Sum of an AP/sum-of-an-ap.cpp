
class Solution {
  public:
    int sum_of_ap(int n, int a, int d) {
        // Code here.
        float sum=0;
        for(int i=0;i<n;i++){
            sum+=a;
        a+=d;
        }
        return sum;
    }
};