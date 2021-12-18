
#include<bits/stdc++.h>
using namespace std;

bool DFSrev(vector<int> adj[],int s,bool visited[],bool rectst[])
{

    visited[s]=true;
    rectst[s]=true;
    for(int x:adj[s])
    {
        if(visited[x]==false)
        {
            if(DFSrev(adj,x,visited,rectst)==true)
                return true;
        }
        else if(rectst[x]==true)
            return true;
    }
    rectst[s]=false;
    return false;
}
bool DFS(vector<int> adj[],int V)
{
    bool visited[V];
    for(int i=0;i<V;i++)
    {
        visited[i]=false;
    }
    bool recst[V];
    for(int i=0;i<V;i++)
    {
        recst[i]=false;
    }
    for(int i=0;i<V;i++)
    {
        if(visited[i]==false)
            if(DFSrev(adj,i,visited,recst)==true)
             return true;
    }
    return false;
}
void addedge(vector<int> adj[],int u,int v)
{
    adj[u].push_back(v);
}
int main()
{
	int V=6;
	vector<int> adj[V];
	addedge(adj,0,1);
	addedge(adj,2,1);
	addedge(adj,2,3);
	addedge(adj,3,4);
	addedge(adj,4,5);
	addedge(adj,5,3);

	if(DFS(adj,V))
	    cout<<"Cycle found";
	else
	    cout<<"No cycle found";

	return 0;
}



