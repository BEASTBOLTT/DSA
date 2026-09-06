#include<bits/stdc++.h>


void bfs(vector<vector<int>> adj, unordered_map<int, bool> &visited, vector<int> &ans, int n, int i){
    queue<int> q;
    q.push(i);
    visited[i] = 1;

    while(!q.empty()){
        int frontNode = q.front();
        q.pop();
        ans.push_back(frontNode);
        for (auto x:adj[frontNode]){
            if(!visited[x]){
                q.push(x);
                visited[x] = 1; 
            }
        }
    }
}

vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
    vector<int> ans;
    
    unordered_map<int, bool> visited;


    bfs(adj, visited, ans, n, 0);

    return ans;
}