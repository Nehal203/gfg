//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool is_sorted(const vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) { // Avoid out-of-bounds access
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

bool checkSorted(vector<int>& arr) {
    int n = arr.size();
    int l = 0;
    int r = n - 1;
    int swap_count = 0;

    // Count mismatches between pairs (arr[l], arr[r])
    while (l < r) {
        if (arr[l] > arr[r]) {
            swap(arr[l],arr[r]);
            swap_count++;
        }
        l++;
        r--;
    }

    // Check if exactly 2 mismatches exist and the array is sorted
    if (swap_count <= 2 && is_sorted(arr)) {
        return true;
    } else {
        return false;
    }
 }


};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        vector<int> arr;
        while (ss >> num)
            arr.push_back(num);

        Solution ob;
        bool ans = ob.checkSorted(arr);
        if (ans)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
}

// } Driver Code Ends