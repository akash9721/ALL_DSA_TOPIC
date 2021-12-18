#include<bits/stdc++.h>
using namespace std;
int subseq(string s1,string s2)
{
    int m=s1.size();
    int dp[m+1][m+1];
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0 || j==0)
                dp[i][j]=0;
            else if(s1[i-1]==s2[j-1])
                dp[i][j]=1+dp[i-1][j-1];
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    return dp[m][m];
}
int main()
{
    string s1="aab";
    string s2=s1;
    reverse(s2.begin(),s2.end());
    int lps=subseq(s1,s2);
    cout<<lps;
    //cout<<"longest palindromic subsequence: "<<lps<<endl;
    //cout<<"longest palindromic subsequence length: "<<lps.length();
}


