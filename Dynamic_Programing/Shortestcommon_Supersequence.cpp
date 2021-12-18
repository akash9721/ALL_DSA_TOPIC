#include<bits/stdc++.h>
using namespace std;
string subseq(string s1,string s2,int m,int n)
{
    string dp[m+1][n+1];
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0 || j==0)
                dp[i][j]="";
               else if(s1[i-1]==s2[j-1])
                    dp[i][j]=dp[i-1][j-1]+s1[i-1];
               else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    return dp[m][n];
}
int main()
{
    string s1="AGGTAB";
    string s2="GXTXAYB";
    int m=s1.length();
    int n=s2.length();
    string lcs=subseq(s1,s2,m,n);
    cout<<"longest common subsequence is:  "<<endl;
    cout<<lcs<<endl;
    int p1=0,p2=0;
    string ans="";
    for(char c:lcs)
    {
        while(s1[p1]!=c)
           ans+=s1[p1++];
        while(s2[p2]!=c)
          ans+=s2[p2++];

          ans+=c;
          ++p1;
          ++p2;
    }
    ans+=s1.substr(p1)+s2.substr(p2);
    cout<<"shortest common supersequence:  "<<endl;
     cout<<ans;
}
