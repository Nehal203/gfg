//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &a, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &a[i]);
        }
    }

    template <class T>
    static void print(vector<T> &a) {
        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    using ll = long long;
    long long maxTip(int n, int x, int y, vector<int> &arr, vector<int> &brr) {
        // code here
        ll ans = 0, sum = 0;
        int my = n - min(x,n), c = 0; // my = min required value for y
        priority_queue<int> pq;
        for(auto a : arr)
            sum += a;
        for(int i=0;i<n;i++){
            pq.push(brr[i]- arr[i]);
        }
        // adjust the sum to the minimum required value of y
        while(c < my){
            sum += pq.top();
            pq.pop();
            c++;
        }
        // look for alternative 
        // u can break as well if pq.top() < 0
        while(c <= y){
            ans = max(ans, sum);
            sum += pq.top();
            pq.pop();
            c++;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        int x;
        scanf("%d", &x);

        int y;
        scanf("%d", &y);

        vector<int> arr(n);
        Array::input(arr, n);

        vector<int> brr(n);
        Array::input(brr, n);

        Solution obj;
        long long res = obj.maxTip(n, x, y, arr, brr);

        cout << res << endl;
    }
}

// } Driver Code Ends