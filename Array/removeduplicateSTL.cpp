#include<bits/stdc++.h>
using namespace std;
void duplicate(int a[],int n)
{
    vector<int> v(a,a+n);
    vector<int>::iterator it;
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
    int a[]={10,20,30,30,40,50,60,60,2,3,5,5};      // in sorted order
    int n=sizeof(a)/sizeof(a[0]);
    for(int x:a)
    {
        cout<<x<<" ";
    }
    duplicate(a,n);
}
