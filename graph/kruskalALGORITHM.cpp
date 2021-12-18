#include<bits/stdc++.h>
using namespace std;
struct node
{
    int parent;
    int rank;
};
struct edge
{
    int src,des,wt;
};
vector<node> dsfu;
vector<edge> mst;

int find(int v)
{
    if(dsfu[v].parent==-1)
        return v;
    return dsfu[v].parent=find(dsfu[v].parent);
}

void unionis(int from,int to)
{
    if(dsfu[from].rank>dsfu[to].rank)
        dsfu[to].parent=from;
    else if(dsfu[from].rank<dsfu[to].rank)
       dsfu[from].parent=to;
    else
    {
        dsfu[from].parent=to;
        dsfu[to].rank+=1;
    }
}
bool comprator(edge a,edge b)
{
    return a.wt<b.wt;
}
void kruskal(vector<edge> & el,int V,int E)
{
    sort(el.begin(),el.end(),comprator);
    int sum=0;

    int i=0,j=0;
    while(i<V-1 && j<E)
    {
        int from=find(el[j].src);
        int to=find(el[j].des);

        if(from==to)
        {
            j++;
            continue;
        }
        unionis(from,to);
        mst.push_back(el[j]);
        sum+=el[j].wt;
        i++;
    }
    cout<<"sum is"<<sum;
}
void show(vector<edge>& mst)
{
    for(auto x:mst)
    {
        cout<<"src: "<<x.src<<"  des: "<<x.des<<"   wt: "<<x.wt<<endl;
    }
}
int main()
{
    int V,E;
    cin>>V>>E;
    dsfu.resize(V);
    for(int i=0;i<V;i++)
    {
        dsfu[i].parent=-1;
        dsfu[i].rank=0;
    }

    vector<edge> el;
    edge temp;
    for(int i=0;i<E;i++)
    {
        int from,to,wt;
        cin>>from>>to>>wt;
        temp.src=from;
        temp.des=to;
        temp.wt=wt;
        el.push_back(temp);
    }
    kruskal(el,V,E);
    show(mst);
}
