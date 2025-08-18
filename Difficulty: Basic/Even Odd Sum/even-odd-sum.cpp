class Solution {
  public:
    vector<int> EvenOddSum(int N, int Arr[]) {
        // code here
        int even=0;
        int odd=0;
        for(int i=0;i<N;i++){
            if(i%2==0){
                even+=Arr[i];
            }
            else{
                odd+=Arr[i];
            }
        }
        return {even,odd};
    }
};