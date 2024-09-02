//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    int solve(vector<vector<int>>&grid){
        int n = grid.size();
        priority_queue<pair<int,pair<int,int>>>pq;
        vector<vector<int>>dist(n,vector<int>(n,INT_MAX));
        dist[0][0] = grid[0][0];
        pq.push({-1 * grid[0][0],{0,0}});
        while(!pq.empty()){
            int curr_dist = -1 * pq.top().first;
            int i = pq.top().second.first;
            int j = pq.top().second.second;
            pq.pop();
            if(i+1 < n){
                if(curr_dist + grid[i+1][j] < dist[i+1][j]){
                    pq.push({-1*(curr_dist + grid[i+1][j]),{i+1,j}});
                    dist[i+1][j] = curr_dist + grid[i+1][j];
                }
            }
            if(j+1 < n){
                if(curr_dist + grid[i][j+1] < dist[i][j+1]){
                    pq.push({-1*(curr_dist + grid[i][j+1]),{i,j+1}});
                    dist[i][j+1] = curr_dist + grid[i][j+1];
                }
            }
            if(i-1 >= 0){
                if(curr_dist + grid[i-1][j] < dist[i-1][j]){
                    pq.push({-1*(curr_dist + grid[i-1][j]),{i-1,j}});
                    dist[i-1][j] = curr_dist + grid[i-1][j];
                }
            }
            if(j-1 >= 0){
                if(curr_dist + grid[i][j-1] < dist[i][j-1]){
                    pq.push({-1*(curr_dist + grid[i][j-1]),{i,j-1}});
                    dist[i][j-1] = curr_dist + grid[i][j-1];
                }
            }
        }
        return dist[n-1][n-1];
    }
    int minimumCostPath(vector<vector<int>>& grid) 
    {
        return solve(grid);
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.minimumCostPath(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends