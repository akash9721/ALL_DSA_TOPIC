#include<bits/stdc++.h>
using namespace std;
vector<int> dsfu;

int find(int v)
{
    if(dsfu[v]==-1)
        return v;
    return find(dsfu[v]);
}
void unionis(int from,int to)
{
    from=find(from);
    to=find(to);
    dsfu[from]=to;
}

bool iscycle(vector<pair<int,int>> & li)
{
    for(auto p:li)
    {
        int from=find(p.first);
        int to=find(p.second);

        if(from==to)
            return true;
        unionis(from,to);
    }
    return false;
}
int main()
{
    int E;
    int V;
    cin>>E>>V;

    dsfu.resize(V,-1);
    vector<pair<int,int>> el;
    for(int i=0;i<E;i++)
    {
        int from,to;
        cin>>from>>to;
        el.push_back({from,to});
    }
    if(iscycle(el))
        cout<<"cycle present"<<endl;
    else
        cout<<"cycle not present";
}
