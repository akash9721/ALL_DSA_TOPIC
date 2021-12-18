#include<bits/stdc++.h>
using namespace std;
int MSIS(int a[],int n)
{
    int msis[n];
    msis[0]=a[0];
    for(int i=1;i<n;i++)
    {
        msis[i]=1;
        for(int j=0;j<i;j++)
        {
            if(a[i]>a[j] && msis[i]<a[i]+msis[j])
            {
                msis[i]=msis[j]+a[i];
            }
        }
    }
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,msis[i]);
    }
    return maxi;

}
int main()
{
    int a[]={5,8,7,1,9};
    int n=sizeof(a)/sizeof(a[0]);
    int maxsum=MSIS(a,n);
    cout<<"Longest increasing subsequence: "<<maxsum;
}

