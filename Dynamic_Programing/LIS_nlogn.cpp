#include<bits/stdc++.h>
using namespace std;
int ceilidx(int lis[],int l,int h,int x)
{
    while(l<h)
    {
        int m=(l+h)/2;
        if(lis[m]>=x)
            h=m;
        else
            l=m+1;
    }
    return h;
}
int LIS(int a[],int n)
{
    int lis[n];
    int len=1;
    lis[0]=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>lis[len-1])
        {
            lis[len]=a[i];
            len++;
        }
        else
        {
            int c=ceilidx(lis,0,len-1,a[i]);
            lis[c]=a[i];
        }
    }
    return len;
}
int main()
{
    int a[]={3,10,20,4,6,7};
    int n=sizeof(a)/sizeof(a[0]);
    int len=LIS(a,n);
    cout<<"Longest increasing subsequence: "<<len;
}

