

class Solution {
  public:
    // Function to count the number of possible triangles.
    int countTriangles(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        int count=0;
        int n=arr.size();
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                int k=j+1;
                while(k<n && (arr[i]+arr[j])>arr[k] ){
                    count++;
                    k++;
                }
            }
        }
        return count;
    }
};