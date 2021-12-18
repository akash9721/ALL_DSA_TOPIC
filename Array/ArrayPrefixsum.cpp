#include<bits/stdc++.h>
using namespace std;
int prefix_sum[1000];
void prefixsum(int a[],int n)
{

    prefix_sum[0]=a[0];
    for(int i=1;i<n;i++)
    {
        prefix_sum[i]=prefix_sum[i-1]+a[i];
    }
}
int getsum(int prefix_sum[],int l,int h)
{
    if(l!=0)
        return prefix_sum[h]-prefix_sum[l-1];
    return prefix_sum[h];
}
int main()
{
    int a[]={2,12,5,9,11,4,7};
    int n=sizeof(a)/sizeof(a[0]);
    prefixsum(a,n);
    cout<<"sum is: "<<getsum(prefix_sum,1,3);
     cout<<"\nsum is: "<<getsum(prefix_sum,0,3);
}
