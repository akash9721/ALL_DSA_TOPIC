
#include<bits/stdc++.h>
using namespace std;
int maxconsum(int a[],int n,int k)
{
    int res=INT_MIN;
    for(int i=0;i+k-1<n;i++)
    {
        int sum=0;
        for(int j=i;j<(i+k);j++)
        {
            sum=sum+a[j];
        }
        res=max(res,sum);
    }
    return res;
}
int main()
{
    int a[]={1,2,-1,4,2,7};
    int n=sizeof(a)/sizeof(a[0]);
    int k;
    cin>>k;
    cout<<"Maximum consicutive sum are :"<<maxconsum(a,n,k);
}

