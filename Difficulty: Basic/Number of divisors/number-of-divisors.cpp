// User function Template for C++

class Solution {
  public:
    int countDivisors(int n) {
        // Code here.
        int sum=0;
        for(int i=1;i<=n;i++){
            if(n%i==0 && i%3==0){
                sum++;
            }
        }
        return sum;
    }
};