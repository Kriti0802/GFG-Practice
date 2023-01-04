// #include <bits.\stdc++.h>
// using namespace std;

// vector<vector<int>>dfs(int V,int E,vector<vector<int>>&edges)
// {
//     // prepare adjlist

//     unordered_map<int,list<int>>adj;
//     for(int i=0;i<edges.size();i++)
//     {
//      int u=edges[i][0];
//      int v=edges[i][1];

//      adj[u].push_back(v);
//     adj[v].push_back(u);     

//     }

//     unordered_map<int,bool>visited;
//     vector<vector<int>>ans;
    
//     for(int i=0;i<V;i++)
//     {
//         if(!visited[i])
//         {
//             dfs(i,visited,adj);
//         }
//     }

// }