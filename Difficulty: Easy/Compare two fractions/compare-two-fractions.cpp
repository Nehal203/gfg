//{ Driver Code Starts

#include <iostream>
#include <regex>
using namespace std;


// } Driver Code Ends

class Solution {

  public:

    string compareFrac(string str) {         // Code here

       int a=-1,b=-1;

        int c=-1,d=-1;

        int tmp=0;

        for(int i=0;i<str.length();i++){

            if(isdigit(str[i])){

                tmp = tmp*10 + (str[i]-'0');

            }else if(str[i] == '/' || str[i] == ' '){

                if(a==-1){

                    a = tmp;

                }

                else if(b==-1){

                    b = tmp;

                }else if(c==-1){

                    c=tmp;

                }else{

                    d=tmp;

                }

                tmp=0;

            }

        }

        if(d==-1){

            d=tmp;

        }

        

        

        float A = (float)a/b;

        float B = (float)c/d;

        

        string ans ="";

        if(A > B){

            ans = to_string(a) + '/' + to_string(b);

        }else if(A < B){

            ans = to_string(c) + '/' + to_string(d);

        }else{

            ans = "equal";

        }

        return ans;

    }

};


//{ Driver Code Starts.

int main() {
    Solution ob;
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {

        string str;
        getline(cin, str);

        cout << ob.compareFrac(str) << endl;
    }
    return 0;
}

// } Driver Code Ends