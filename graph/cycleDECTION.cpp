#include<bits/stdc++.h>
using namespace std;

bool DFSrev(vector<int> adj[],int s,bool visited[],int parent)
{

    visited[s]=true;
    for(int x:adj[s])
    {
        if(visited[x]==false)
        {
            if(DFSrev(adj,x,visited,s)==true)
                return true;
        }
        else if(x!=parent)
            return true;
    }
    return false;
}
bool DFS(vector<int> adj[],int V)
{
    bool visited[V];
    for(int i=0;i<V;i++)
    {
        visited[i]=false;
    }
    for(int i=0;i<V;i++)
    {
        if(visited[i]==false)
            if(DFSrev(adj,i,visited,-1)==true)
             return true;
    }
    return false;
}
void addedge(vector<int> adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int main()
{
	int V=6;
	vector<int> adj[V];
	addedge(adj,0,1);
	addedge(adj,1,2);
	addedge(adj,2,4);
	addedge(adj,4,5);
	addedge(adj,1,3);
	addedge(adj,2,3);
	if(DFS(adj,V))
        cout<<"cycle found"<<endl;
    else
        cout<<"not found";
}

