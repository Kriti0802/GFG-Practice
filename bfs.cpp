// void bfs(unordered_map<int,list<int>>&adjList,  unordered_map<int,bool>&visited,vector<int>&ans,int node)
// { 
//     queue<int>q;
//     q.push(node);
//    visited[node]==1;
    
//     while(!q.empty())
//     {
//       int frontnode=q.front();
//         q.pop();
        
//         ans.push_back(frontnode);
        
// //         traverse neighbour of frontnode
//         for(auto i:adjList[frontnode])
//         {
//             if(!visited[i])
//             {
//                 q.push(i);
//                 visited[i]=1;
//             }
//         }
//     }
// }