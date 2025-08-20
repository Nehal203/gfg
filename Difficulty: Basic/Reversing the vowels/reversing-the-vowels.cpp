class Solution {
  public:
    string modify(string& s){
        int left=0;
        int right=s.length()-1;
        while(left<right){
            while(left<right && !isvowel(s[left])){
                left++;
            }
            while(left<right && !isvowel(s[right])){
                right--;
            }
            if(left<right){
                swap(s[left],s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
    bool isvowel(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }
    // code here.
    
};