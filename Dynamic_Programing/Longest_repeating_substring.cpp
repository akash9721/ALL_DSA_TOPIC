#include<bits/stdc++.h>
using namespace std;
int subseq(string s1,int m)
{
    int dp[m+1][m+1];
    int res=0;
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0 || j==0)
                dp[i][j]=0;
            else if(s1[i-1]==s1[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];
                res=max(res,dp[i][j]);
            }
            else
                dp[i][j]=0;
        }
    }
    return res;
}
int main()
{
    string s1="abcdabc";
    int m=s1.length();
    int lrs=subseq(s1,m);
    cout<<"longest substring: "<<lrs<<endl;
}


