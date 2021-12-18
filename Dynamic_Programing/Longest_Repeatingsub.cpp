#include<bits/stdc++.h>
using namespace std;
string subseq(string s1,int m)
{
    string dp[m+1][m+1];
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0 || j==0)
                dp[i][j]="";
            else if(s1[i-1]==s1[j-1] && i!=j)
                dp[i][j]=s1[i-1]+dp[i-1][j-1];
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    return dp[m][m];
}
int main()
{
    string s1="AXXX";
    int m=s1.length();
    string lrs=subseq(s1,m);
    cout<<"longest repeating subsequence: "<<lrs<<endl;
    cout<<"longest repeating subsequence length: "<<lrs.length();
}

