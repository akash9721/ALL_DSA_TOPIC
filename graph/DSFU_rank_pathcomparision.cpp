#include<bits/stdc++.h>
using namespace std;

struct node
{
    int parent;
    int rank;
};
vector<node> dsfu;

int find(int v)
{
    if(dsfu[v].parent==-1)
        return v;
    return dsfu[v].parent=find(dsfu[v].parent);
}

void union_is(int from,int to)
{
    if(dsfu[from].rank>dsfu[to].rank)
    {
        dsfu[to].parent=from;
    }
    else if(dsfu[from].rank<dsfu[to].rank)
    {
        dsfu[from].parent=to;
    }
    else
    {
        dsfu[from].parent=to;
        dsfu[to].rank+=1;
    }
}

bool iscycle(vector<pair<int,int>> & el)
{
    for(auto p:el)
    {
        int from=find(p.first);
        int to=find(p.second);

        if(from==to)
            return true;
        union_is(from,to);
    }
    return false;
}
int main()
{
  int E;
  int V;
  cin>>E>>V;
  dsfu.resize(V);
  for(int i=0;i<V;i++)
  {
      dsfu[i].parent=-1;
      dsfu[i].rank=0;
  }

  vector<pair<int,int>> el;
  for(int i=0;i<E;i++)
  {
      int from,to;
      cin>>from>>to;
      el.push_back({from,to});
  }

  if(iscycle(el))
    cout<<"cycle is present"<<endl;
  else
    cout<<"cycle is not present"<<endl;

}
