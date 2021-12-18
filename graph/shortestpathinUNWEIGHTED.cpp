
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
void Bfspath(vector<int> adj[],int V,int s,int dist[])
{
    bool visited[V];
    for(int i=0;i<V;i++)
    {
        visited[i]=false;
    }
    queue<int> q;
    visited[s]=true;
    q.push(s);

    while(q.empty()==false)
    {
        int u=q.front();
        q.pop();
        for(int x:adj[u])
        {
            if(visited[x]==false)
            {
                dist[x]=dist[u]+1;
                visited[x]=true;
                q.push(x);
            }
        }
    }
}
void addedge(vector<int> adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int main()
{
    int V=4;
    vector<int> adj[V];
    addedge(adj,0,1);
	addedge(adj,1,2);
	addedge(adj,2,3);
	addedge(adj,0,2);
	addedge(adj,1,3);

	int dist[V];
	for(int i=0;i<V;i++)
    {
        dist[i]=INT_MIN;
    }
    dist[0]=0;
    Bfspath(adj,V,0,dist);
    for(int i=0;i<V;i++)
    {
        cout<<dist[i]<<" ";
    }
}
