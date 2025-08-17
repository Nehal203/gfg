class Solution {
  public:
    int repeatedSumOfDigits(int N) {
        // code here
        int sum=0;
        while(N>0 || sum>9){
            if(N==0){
                N=sum;
                sum=0;
            }
            sum+=N%10;
            N/=10;
        }
        return sum;
    }
};
