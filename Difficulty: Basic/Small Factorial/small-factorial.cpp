
class Solution {
  public:
    long long int find_fact(int n) {
        // Code here.
        if(n==0 || n==1){
            return 1;
        }
        return n*find_fact(n-1);
    }
};