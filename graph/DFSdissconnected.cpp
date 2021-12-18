#include<bits/stdc++.h>
using namespace std;
void DFSrec(vector<int> adj[],int s,bool visited[])
{
    visited[s]=true;
    cout<<s<<" ";

    for(int x:adj[s])
    {
        if(visited[x]==false)
            DFSrec(adj,x,visited);
    }
}
void DFS(vector<int> adj[],int V,int s)
{
    bool visited[V];
    for(int i=0;i<V;i++)
    {
        visited[i]=false;
    }
    for(int i=0;i<V;i++)
    {

        if(visited[i]==false)
            DFSrec(adj,i,visited);
    }
}
void addedge(vector<int> adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int main()
{
    int V=5;
    vector<int> adj[V];
    addedge(adj,0,1);
	addedge(adj,0,2);
	addedge(adj,1,2);
	addedge(adj,3,4);


	DFS(adj,V,0);
}
