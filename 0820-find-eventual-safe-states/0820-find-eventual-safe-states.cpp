class Solution {
    //false mtlb we have a cycle
    private:
    bool dfs(int node ,vector<int>&vis, vector<int>&pathVis, vector<int>adj[], vector<int>&check){
        vis[node]=1;
        pathVis[node]=1;
        check[node]=0;
        for(int it:adj[node]){
            if(!vis[it]){
                if(dfs(it,vis,pathVis,adj,check)==false){
                    //agar cycle hai
                        check[node]=0;
                    return false;
                }
        }else if(pathVis[it]==1){
                  check[node]=0;
            return false;
        }

    }
    check[node]=1;
    pathVis[node]=0;
    return true;
    }

public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();

vector<int>adj[n];
for(int i=0;i<n;i++){
    for(auto it:graph[i]){
        adj[i].push_back(it);
    }
}
vector<int>check(n,0);

        vector<int>vis(n,0);
        vector<int>pathVis(n,0);
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i,vis,pathVis,adj,check);
                   
                
            }
        }
    for(int i=0;i<n;i++){
        if(check[i]==1){
            ans.push_back(i);
        }
    }

        return ans;

    }
};