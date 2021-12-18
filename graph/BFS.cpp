#include<bits/stdc++.h>
using namespace std;
void BFS(vector<int>adj[],int V,int s)
{
    bool visited [V+1];
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
        cout<<u<<" ";
        for(int x:adj[u])
        {
            if(visited[x]==false)
            {
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
    int V=7;
    vector<int> adj[V];
    /*addedge(adj,0,1);
    addedge(adj,0,2);
    addedge(adj,1,2);
    addedge(adj,2,3);
    addedge(adj,1,3);
    addedge(adj,3,4);
    addedge(adj,2,4);*/
    addedge(adj,0,1);
	addedge(adj,0,2);
	addedge(adj,2,3);
	addedge(adj,1,3);
	addedge(adj,4,5);
	addedge(adj,5,6);
	addedge(adj,4,6);

    BFS(adj,V,0);

}
