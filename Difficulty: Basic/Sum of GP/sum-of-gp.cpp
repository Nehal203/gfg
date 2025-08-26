class Solution {
  public:
    long sum_of_gp(long n, long a, long r) {
        // Code here
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a;
            a*=r;
        }
        return sum;
    }
};