class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
    
        vector<int>adj[n];
        for(int i=0;i<n;i++){
          for(int j:graph[i]){
              adj[i].push_back(j);
              adj[j].push_back(i);
          }
        }
        bool ans=true;
      vector<int>color(n,-1);

      for(int i=0;i<n;i++){
          if(color[i]==-1){
               queue<int>q;
      q.push(i);
      color[i]=0;
      while(!q.empty()){
          int node=q.front();
          q.pop();
          for(int it:adj[node]){
              if(color[it]==-1){
                  color[it]=!color[node];
                  q.push(it);
              }else if(color[it]==color[node]){
                        ans= false;
                        break;
              }
          }
      }

          }
      }

      return ans;
     

    }
};