
class Solution {
  public:
    vector<int> count(string s) {
        // code here.
        int c1=0,c2=0,c3=0,c4=0;
        vector<int>c;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]>='A' && s[i]<='Z'){
                c1++;
            }
            else if(s[i]>='a' && s[i]<='z'){
                c2++;
            }
            else if(s[i]>='0' && s[i]<='9'){
                c3++;
            }
            else{
                c4++;
            }
        }
        // c.push_back(c1);
        // c.push_back(c2);
        // c.push_back(c3);
        // c.push_back(c4);
        c={c1,c2,c3,c4};
        return c;
    }
};