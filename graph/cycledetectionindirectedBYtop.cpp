#include<bits/stdc++.h>
using namespace std;
int topologicalSort(vector<int>adj[],int V)
{
    vector<int> indeg(V,0);
    for(int i=0;i<V;i++)
    {
        for(int x:adj[i])
            indeg[x]++;
    }
    queue<int> q;
    for(int i=0;i<V;i++)
    {
        if(indeg[i]==0)
            q.push(i);
    }
    int cnt=0;
    while(q.empty()==false)
    {
        int val=q.front();
        q.pop();
        for(int x:adj[val])
        {
            if(--indeg[x]==0)
                q.push(x);
            cnt++;
        }
    }
    return (V!=cnt);
}
void addEdge(vector<int> adj[],int u,int v)
{
    adj[u].push_back(v);
}
int main()
{
	int V=5;
	vector<int> adj[V];
	addEdge(adj,0, 1);
    addEdge(adj,4, 1);
    addEdge(adj,1, 2);
    addEdge(adj,2, 3);
    addEdge(adj,3, 1);

    cout<<topologicalSort(adj,V);

	return 0;
}
