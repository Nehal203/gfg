//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long ExtractNumber(string sentence) {
        long long res = -1;
        int i = 0;
        string temp = "";
        bool flag = 0;
        for(int i = 0; i < sentence.length(); i++){
            if(!isdigit(sentence[i])){
                temp = "";
                continue;
            }
            while(isdigit(sentence[i])){
                if(i >= sentence.length()) break;
                if (sentence[i] == '9'){
                    flag = 1;
                }
                temp += sentence[i];
                i++;
            }
            if(temp == "" || flag == 1){
                flag = 0;
                temp = "";
                continue;
            }
            long long num = stoll(temp);
            res = max(res, num);
            temp = "";
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;
        cout << ob.ExtractNumber(s) << "\n";
    }

    return 0;
}

// } Driver Code Ends