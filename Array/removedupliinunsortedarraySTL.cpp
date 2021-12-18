#include<bits/stdc++.h>
using namespace std;
void duplicate(int a[],int n)
{
    vector<int> v(a,a+n);
    vector<int>::iterator it;

    sort(v.begin(),v.end());
    it=unique(v.begin(),v.end());

    v.resize(distance(v.begin(),it));

    cout<<"\nunique element are"<<endl;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
}
int main()
{
    int a[]={ 1, 2, 5, 1, 7, 2, 4, 2 };
    int n=sizeof(a)/sizeof(a[0]);
    for(int x:a)
    {
        cout<<x<<" ";
    }
    duplicate(a,n);
}
