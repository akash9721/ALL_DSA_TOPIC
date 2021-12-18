#include<bits/stdc++.h>
using namespace std;
void morethan(int a[],int n,int k)
{
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        m[a[i]]++;
    }
    for(auto x:m)
    {
        if(x.second>n/k)
        {
            cout<<x.first<<" ";
        }
    }
}
int main()
{
    int a[]={10,20,30,20,10,10};
    int n=sizeof(a)/sizeof(a[0]);
    morethan(a,n,3);
}
