#include<bits/stdc++.h>
using namespace std;
int sw(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        while(a[i]>=1 && a[i]<=n && a[i]!=a[a[i]-1])
        {
            swap(a[i],a[a[i]-1]);
        }
    }

    for(int i=0;i<n;i++)
    {

        if(a[i]!=i+1)
            return i+1;
    }
    return n+1;
}
int main()
{

    int a[]={2,3,-7,6,8,1,-10,15};
    int n=sizeof(a)/sizeof(a[0]);
    for(int x:a)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<sw(a,n)<<endl;
    for(int x:a)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}
