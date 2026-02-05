#include<bits/stdc++.h>
using namespace std;

 void dfs(int node,vector<vector<int>> &adj,vector<int> &visited,stack<int> &st){
        visited[node] =1;
        
        for(auto i:adj[node]){
            if(!visited[i]){
                dfs(i,adj,visited,st);
            }
        }
        
        st.push(node);
    }
    
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adj(V);
        
        for(auto i:edges){
            adj[i[0]].push_back(i[1]);
        }
        
        vector<int> visited(V,0);
        stack<int> st;
        
        for(int i=0;i<V;i++){
            if(!visited[i]){
                dfs(i,adj,visited,st);
            }
        }
        
        vector<int> ans;
        
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        
        return ans;
    }

int main(){
    vector<vector<int>> edges = {{1, 3}, {2, 3},{4, 1}, {4, 0}, {5, 0}, {5,2}};

    vector<int> ans = topoSort(6,edges);
    for(auto i: ans){
        cout<<i<<" ";
    }

}