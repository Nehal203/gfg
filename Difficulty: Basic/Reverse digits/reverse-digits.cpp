
class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        string s=to_string(n);
        reverse(s.begin(),s.end());
        return stoi(s);
    }
};