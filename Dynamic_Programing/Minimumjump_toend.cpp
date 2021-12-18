#include<bits/stdc++.h>
using namespace std;
int minjump(int a[],int n)
{
    int dp[n];
    dp[0]=0;
    for(int i=1;i<n;i++)
    {
        dp[i]=INT_MAX;
        for(int j=0;j<i;j++)
        {
            if(a[j]+j>=i)
            {
                if(dp[j]!=INT_MAX)
                {
                   dp[i]=min(dp[i],dp[j]+1);
                }
            }
        }

    }
    return dp[n-1];
}
int main()
{
    int a[]={3,4,2,1,2,1};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<minjump(a,n);
}
/*ind 0 1 2 3 4
a   3 4 2 1 2
dp  0 $ $ $ $*/
