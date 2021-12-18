#include<bits/stdc++.h>
using namespace std;
void unionarr(int a[],int b[],int n,int m)
{
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(i>0 && a[i-1]==a[i])
        {
            i++;
            continue;
        }
        if(j>0 && b[j-1]==b[j])
        {
            j++;
            continue;
        }
        if(a[i]<b[j])
        {
            cout<<a[i]<<" ";
            i++;
        }
        else if(a[i]>b[j])
        {
            cout<<b[j]<<" ";
            j++;
        }
        else
        {
            cout<<a[i]<<" ";
            i++;
            j++;
        }
    }
    while(i<n)
    {
        if(i==0 || a[i]!=a[i-1])
            cout<<a[i]<<" ";i++;
    }
    while(j<m)
    {
        if(j==0 || b[j]!=b[j-1])
            cout<<b[j]<<" ";j++;
    }
}
int main()
{
    int a[]={2,5,10,15,25};
    int n=sizeof(a)/sizeof(a[0]);
    int b[]={3,5,15,17,26};
    int m=sizeof(b)/sizeof(b[0]);
    unionarr(a,b,n,m);
}
