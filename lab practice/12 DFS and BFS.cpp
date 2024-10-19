#include<bits/stdc++.h>
using namespace std;

int const lim = 105;
vector<int> adj[lim];
int vis[lim];


void BFS(int i)
{
    cout<<i<<" ";
    vis[i] = 1;

    queue<int> q;
    q.push(i);

    while(!q.empty() )
    {
        int u = q.front();
        q.pop();

        for(auto v: adj[u])
        {
            if(vis[v]==0)
            {
                cout<<v<<" ";
                q.push(v);
                vis[v] = 1;
            }
        }
    }
}


void DFS(int u)
{
    vis[u] = 1;
    cout<<u<<" " ;

    for(auto v : adj[u])
    {
        if(vis[v]==0)
        {
            DFS(v);
        }
    }
}

int main()
{
   int nodes, edges;
   cin>>nodes>>edges;

   while(edges--)
   {
       int u,v;
       cin>>u>>v;

       adj[u].push_back(v);
       adj[v].push_back(u);
   }

   BFS(1);
   cout<<endl;

  for(int i=0; i<=nodes; i++) vis[i] = 0;

  DFS(1);


}
