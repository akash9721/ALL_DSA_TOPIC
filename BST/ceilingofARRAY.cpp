#include<bits/stdc++.h>
using namespace std;
void ceil(int a[],int n)
{
    cout<<"-1"<<" ";
    set<int> s;
    s.insert(a[0]);
    for(int i=1;i<n;i++)
    {
        if(s.lower_bound(a[i])!=s.end())
            cout<<*(s.lower_bound(a[i]))<<" ";
        else
            cout<<"-1"<<" ";
        s.insert(a[i]);
    }
}
int main()
{
    int a[]={2,8,30,15,25,12};
    int n=sizeof(a)/sizeof(a[0]);
    ceil(a,n);
}
