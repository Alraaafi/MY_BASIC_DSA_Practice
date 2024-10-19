#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t,n,m,ans,i,j;

    freopen("INP.txt", "r", stdin); //Take input From text file. It's Main Part...
    //freopen("OUTP.txt", "w", stdout); //Take ANS in File

    int node, edges;
    cin>>node>>edges;
    int G[node+1][node+1];
    memset(G,0,sizeof(G));

    while(edges--)
    {
        int u,v;
        cin>>u>>v;
        G[u][v] = 1;
        G[v][u] = 1;
    }

     cout<<"    ";
     for(i=1; i<=node; i++)
     {
        cout<<i<<"   ";
     }
     cout<<endl<<"----------------------------------"<<endl;

    for(i=1; i<=node; i++)
    {
        cout<<i<<" | ";
        for(j=1; j<=node; j++)
        {
            cout<<G[i][j]<<"   ";
        }
        cout<<endl;
    }

}

