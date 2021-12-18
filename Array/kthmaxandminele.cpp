#include<bits/stdc++.h>
using namespace std;
void show(set<int> se)
{
    for(int x:se)
    {
        cout<<x<<" ";
    }
}
int kthminelement(int a[],int n,int k)
{
    set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
    auto it=s.begin();
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
    set<int> ss(a,a+n);
    show(ss);
    cout<<"\nenter the kth element"<<endl;
    cin>>k;
    cout<<k<<" th smallest element is :"<<kthminelement(a,n,k);

}
