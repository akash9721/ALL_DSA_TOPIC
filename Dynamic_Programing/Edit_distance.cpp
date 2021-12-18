#include<bits/stdc++.h>
using namespace std;
int minno(int x, int y, int z)
 {
      return min(min(x, y), z);
 }
int editDistance(string s, string t)
    {
        // Code here
        int m=s.length();
        int n=t.length();
        int dp[m+1][n+1];
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0)
                dp[i][j]=j;
                else if(j==0)
                dp[i][j]=i;
                else if(s[i-1]==t[j-1])
                dp[i][j]=dp[i-1][j-1];
                else
                dp[i][j]=1+minno(dp[i-1][j],dp[i][j-1],dp[i-1][j-1]);
            }
        }
        return dp[m][n];
    }
int main()
{
    string s1="ecfbefdcfca";
    string s2="badfcbebbf";
    cout<<editDistance(s1,s2);
}

