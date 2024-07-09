//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int search(vector<int>& arr, int key) {
        int s=0,e=arr.size()-1;
        int mid;
        int pivot=arr.size()-1;
        while(s<=e){
            mid=s+(e-s)/2;
            if(arr[mid]>(arr[(mid+1)%arr.size()])){
                pivot=mid+1;
                break;
            }
            else if (arr[mid]<arr[(mid-1)%arr.size()]){
                pivot=mid;
                break;
            }
            else if(arr[mid]>arr[arr.size()-1]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        // cout<<pivot<<endl;
        if(arr[pivot]==key) return pivot;
        else if(pivot==0){
            s=0;e=arr.size()-1;
        }
        else if(pivot==arr.size()-1){
            s=0;
            e=pivot-1;
        }
        else if(key>=arr[0]){
            s=0;
            e=pivot-1;
        }
        else{
            s=pivot+1;
            e=arr.size()-1;
        }
        int ind=-1;
        while(s<=e){
            mid=s+(e-s)/2;
            if(arr[mid]==key){
                return mid;
            }
            else if(arr[mid]>key){
                e=mid-1;
            }
            else s=mid+1;
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(arr, key) << endl;
    }
    return 0;
}
// } Driver Code Ends