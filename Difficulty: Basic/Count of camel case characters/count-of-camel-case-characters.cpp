
class Solution {
  public:
    int countCamelCase(string s) {
        // code here.
        int count=0;
        for(int i=0;s[i];i++){
            if(isupper(s[i])){
                count++;
            }
        }
        return count;
    }
};