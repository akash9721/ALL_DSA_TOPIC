#include<bits/stdc++.h>
using namespace std;
void show(set<int,greater<int>> sss)
{
    for(int x:sss)
    {
        cout<<x<<" ";
    }
}
int kthmaxelement(int a[],int n,int k)
{
    set<int,greater<int>> sx;
    for(int i=0;i<n;i++)
    {
        sx.insert(a[i]);
    }
    auto it=sx.begin();
    for(int i=0;i<k-1;i++)
    {
        it++;
    }
    return *it;
}
int main()
{
    int k;
    int a[]={1,4,2,6,4,8,9,5,7,22,12};
    int n=sizeof(a)/sizeof(a[0]);
    set<int,greater<int>> sa(a,a+n);
    show(sa);
    cout<<"\nenter the kth element"<<endl;
    cin>>k;
    cout<<k<<" th gratest element is :"<<kthmaxelement(a,n,k);
}
