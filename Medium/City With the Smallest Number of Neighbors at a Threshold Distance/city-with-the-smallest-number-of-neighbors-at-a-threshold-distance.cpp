//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int findCity(int n, int m, vector<vector<int>>& edges,int distanceThreshold) {
        //First create a distance array - which will be an array which will contain
        //shortest distance from any point to every other point constructed using 
        //floyd warshall algorithm
        
        vector<vector<int>>dist(n,vector<int>(n,1e9));//initialzed with infi
        
        //Construct this matrix according to given edges
        for(auto it:edges){
            dist[it[0]][it[1]]=it[2];
            dist[it[1]][it[0]]=it[2];
        }
        
        //For same index distance is zero , like ex dist[i][i]=0(dist[0][0]=0,dist[1][1]=0)
        for(int i=0;i<n;i++)dist[i][i]=0;
        
        //Floyd Warshall Algorithm
        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
                }
            }
        }
        int cityCount=n;
        int cityNo=-1;
        
        for(int city=0;city<n;city++){
            int cnt=0;//count for each city
            for(int adjCity=0;adjCity<n;adjCity++){
                if(dist[city][adjCity]<=distanceThreshold){
                    cnt++;
                }
            }
            
            if(cnt<=cityCount){
                cityCount=cnt;
                cityNo=city;
            }
        }
        
        return cityNo;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> adj;
        // n--;
        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        int dist;
        cin >> dist;
        Solution obj;
        cout << obj.findCity(n, m, adj, dist) << "\n";
    }
}

// } Driver Code Ends