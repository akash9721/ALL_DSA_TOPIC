#include<bits/stdc++.h>
using namespace std;
int maxdiff(int a[],int n)
{
    int res=a[1]-a[0];
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            res=max(res,a[j]-a[i]);
        }
    }
    return res;
}
int main()
{
    int a[]={2,3,10,6,4,8,1};
    int n=sizeof(a)/sizeof(a[0]);

    cout<<"max diff are :"<< maxdiff(a,n)<<endl;
}
