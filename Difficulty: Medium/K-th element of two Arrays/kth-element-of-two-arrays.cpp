//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        // code here
        int m=0 ,n=0;
        int current=0;
        for (int i=0;i<k;i++)
            {   if(arr1.size()>n && arr2.size()>m)
                {
                    if(arr2[m]<arr1[n])
                        {   if(current<=arr2[m])
                            {
                                current=arr2[m];
                                m++;
                            }
                            else{
                            current=arr1[n];
                            m++;}
                        }
                            
                    else if(arr2[m]>arr1[n])
                        {   if(current<=arr1[n])
                                {
                                    current=arr1[n];
                                    n++;
                                }
                                else{
                            current=arr2[m];
                            n++;}
                        }
                        
                    else
                    {   current=arr1[n];
                        m++;
                        n++;
                        i++;
                    }
                }
                else if(arr1.size()>n && arr2.size()==m)
                {
                    current=arr1[n];
                    n++;
                }
                else
                {
                    current=arr2[m];
                    m++;
                }
               
            }
            return current;
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m, k;
        cin >> k;
        cin.ignore();
        string input;
        int num;
        vector<int> arr1, arr2;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr1.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num) {
            arr2.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(k, arr1, arr2) << endl;
    }
    return 0;
}
// } Driver Code Ends