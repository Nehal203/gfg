
class Solution {
  public:
    pair<int, int> get(int a, int b) {
        // code here
        int temp;
        temp=a;
        a=b;
        b=temp;
        return {a,b};
    }
};