#include<bits/stdc++.h>
using namespace std;
void mindiff(int a[],int n)
{
    int res=INT_MAX;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            res=min(res,abs(a[i]-a[j]));
        }
    }
    cout<<res;
}



int mindifff(int a[],int n)
{
    int res=INT_MAX;
    sort(a,a+n);
    for(int i=1;i<n;i++)
    {
        res=min(res,a[i]-a[i-1]);
    }
    return res;
}


int main()
{
    int a[]={1,8,12,5,18};
    int n=sizeof(a)/sizeof(a[0]);
    //mindiff(a,n);
    cout<<mindifff(a,n);
}
