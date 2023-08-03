class Solution {
public:

void bfs(int node, vector<int>adj[],vector<int>& vis){
    queue<int>q;
    q.push(node);
    vis[node]=1;
    while(!q.empty()){
        int front=q.front();
        q.pop();
        for(int it :adj[front]){
            if(!vis[it]){
                q.push(it);
                vis[it]=1;
            }
        }
    }
}
void dfs(int node, vector<int>adj[], vector<int>&vis){
    vis[node]=1;
    for(auto it :adj[node]){
        if(!vis[it]){
            dfs(it,adj,vis);
        }
    }
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        int m=isConnected[0].size();
   vector<int>adj[isConnected.size()]; //adjacency list banalo
   for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           if(isConnected[i][j]==1 and i!=j){
               adj[i].push_back(j);
               adj[j].push_back(i);
           }
       }
   }
vector<int>vis(n,0);
   //0 based indexing
   int count=0;
   for(int i=0;i<n;i++){
       if(!vis[i]){
           bfs(i,adj,vis);
        // dfs(i,adj,vis);
           count++;
       }

   }
   return count;
    }
};