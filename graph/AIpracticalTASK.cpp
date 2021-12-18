#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > graph;
bool vis[100011];

int i, j;
vector<int> solve_vertex(int n,int e){
vector<int> S;
for(i=0;i<n;i++)
{
if (!vis[i])
    {
    for (j = 0; j < (int) graph[i].size(); j++)
    {
        if (!vis[graph[i][j]])
            {
            vis[i] = true;
        vis[graph[i][j]] = true;
        break;
    }
}
}
}
for (int k = 0; k < n; k++)
    if (vis[k])
        S.push_back(k);

return S;
}

int main() {
    int n, e, x, y;
    cout << "Enter number of vertices:";
    cin >> n;
    cout << "Enter number of Edges:";
    cin >> e;
    graph.resize(n);
    memset(vis, 0, sizeof(vis));
    for (i = 0; i < e; i++)
        {
        cout << "Enter the end-points of edge " << i + 1 << " : ";
        cin >> x >> y;
        x--;
        y--;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    vector < int > S = solve_vertex(n, e);
    cout << "The required vertex cover is as follows:\n";
    for (i = 0; i < (int) S.size(); i++)
        cout << S[i] + 1 << " ";
    return 0;
}

