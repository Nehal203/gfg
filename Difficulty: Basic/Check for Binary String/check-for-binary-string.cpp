// Return true if s is binary, else false
class Solution {
  public:
    bool isBinary(string& s) {
        // Your code here
        for(char c:s){
            if(c!='0' && c!='1'){
                return false;
            }
        }
        return true;
    }
};