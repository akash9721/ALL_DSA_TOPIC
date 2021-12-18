
#include<bits/stdc++.h>
using namespace std;
void fre(int a[],int n,int k)
{
    vector<int> v(a,a+n);
    vector<int> aa;
    for(int i=0;i<=n-k;i++)
    {
    unordered_set<int> m(v.begin()+i,v.begin()+i+k);
    aa.push_back(m.size());
    }
    for(auto it=aa.begin();it!=aa.end();it++)
    {
        cout<<*it<<" ";
    }
   // int i=2;
    // unordered_set<int> m(v.begin()+i,v.begin()+i+k);
      //cout<<(m.size());

}
int main()
{
    int a[]={10,20,10,30,40,20,10,50,60,60};
    int n=sizeof(a)/sizeof(a[0]);
    int k=4;
    fre(a,n,k);
}

