#include<bits/stdc++.h>
using namespace std;
void BFS(vector<int> adj[],int s,bool visited[])
{
    queue<int> q;
    visited[s]=true;
    q.push(s);
    while(q.empty()==false)
    {
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        for(int X:adj[u])
        {
            if(visited[X]==false)
            {
                visited[X]=true;
                q.push(X);
            }
        }
    }

}
void BSTdis(vector<int> adj[],int V)
{
    bool visited[V];
    for(int i=0;i<V;i++)
    {
        visited[i]=false;
    }
    for(int i=0;i<V;i++)
    {
        if(visited[i]==false)
        {
           BFS(adj,i,visited);
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
    int V=7;
    vector<int> adj[V];
    addedge(adj,0,1);
	addedge(adj,0,2);
	addedge(adj,2,3);
	addedge(adj,1,3);
	addedge(adj,4,5);
	addedge(adj,5,6);
	addedge(adj,4,6);

	BSTdis(adj,V);

}
