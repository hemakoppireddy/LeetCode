class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int n = arr.size();
        vector<int> vis(n, 0);
        queue<int>bfs;
        bfs.push(start);
        vis[start]=1;
        while(!bfs.empty()) {
            int i = bfs.front();
            bfs.pop();
            if(arr[i]==0) return true;
            int left = i-arr[i];
            int right = i+arr[i];
            if(right<n && !vis[right]){
                vis[right]=1;
                bfs.push(right);
            }
            if(left>=0 && !vis[left]) {
                vis[left]=1;
                bfs.push(left);
            }
        }
        return false;
    }
};