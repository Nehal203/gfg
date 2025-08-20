// User function template for C++
class Solution {
  public:

    string removeVowels(string& s) {
        // Your code goes here
        regex r("[aeiouAEIOU]");
        return regex_replace(s, r,"");
    }
};