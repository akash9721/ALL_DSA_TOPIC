#include<bits/stdc++.h>
using namespace std;
int mnis(int a[],int n)
{
    if(n==1)
        return a[0];
    else if(n==2)
        return max(a[0],a[1]);
        else
            return max(mnis(a,n-1),mnis(a,n-2)+a[n-1]);

}
int dpsol(int a[],int n)
{
    int dp[n+1];
    if(n==1)
        return a[0];
    dp[1]=a[0];
    dp[2]=max(a[0],a[1]);
    for(int i=3;i<=n;i++)
    {
        dp[i]=max(dp[i-1],dp[i-2]+a[i-1]);
    }
    return dp[n];
}
int main()
{
    int a[]={10,20,30,40,50};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<mnis(a,n);
    cout<<endl<<endl;

    cout<<dpsol(a,n);
}
