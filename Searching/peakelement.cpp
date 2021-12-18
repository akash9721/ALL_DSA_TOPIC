#include<bits/stdc++.h>
using namespace std;
int peakele(int a[],int n)
{
    if(n==1)
    {
        return a[0];
    }
    if(a[0]>a[1])
        return a[0];
    if(a[n-1]>a[n-2])
        return a[n-1];
    for(int i=1;i<n-1;i++)
    {
        if(a[i]>=a[i-1] && a[i]<=a[i+1])
            return a[i];
    }
}
int main()
{
    int a[]={5,1,3};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<peakele(a,n);
}
