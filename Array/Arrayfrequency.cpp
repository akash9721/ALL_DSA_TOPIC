#include<bits/stdc++.h>
using namespace std;
void countfreq(int a[],int n)
{
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        m[a[i]]++;
    }
    cout<<"frequency elements are"<<endl;
    for(auto x:m)
    {
        cout<<x.first<<"-->"<<x.second<<endl;
    }

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    countfreq(a,n);

}
