#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b)
{
     a.second<b.second;
}
void sortbyfre(int a[],int n)
{
    unordered_map<int,int> um;
    for(int i=0;i<n;i++)
    {
        um[a[i]]++;
    }
    for(auto x: um)
    {
        cout<<x.first<<"->"<<x.second<<endl;
    }
    cout<<endl<<endl;
    vector<pair<int,int>> v;
    for(auto x: um)
    {
        v.push_back({x.first,x.second});
    }
    for(auto x:v)
    {
        cout<<x.first<<"->"<<x.second<<endl;
    }
    cout<<endl<<endl;

    sort(v.begin(),v.end(),cmp);
    for(auto x:v)
    {
        cout<<x.first<<"->"<<x.second<<endl;
    }


}
int main()
{
    int a[]={2,5,2,8,5,6,8,8};
    int n=sizeof(a)/sizeof(a[0]);
    sortbyfre(a,n);
}
