#include<bits/stdc++.h>
using namespace std;
int knapsack(int item[],int pro[],int w,int n)
{
    if(n==0||w==0)
        return 0;
    if(item[n-1]>w)
    {
        return knapsack(item,pro,w,n-1);
    }
    else
        return max(knapsack(item,pro,w,n-1),pro[n-1]+knapsack(item,pro,w-item[n-1],n-1));
}

int dpsol(int item[],int pro[],int w,int n)
{
    int dp[n+1][w+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=w;j++)
        {
            if(i==0 || j==0)
                dp[i][j]=0;
            else if(item[i-1]>j)
                dp[i][j]=dp[i-1][j];
            else
                dp[i][j]=max(dp[i-1][j],pro[i-1]+dp[i-1][j-item[i-1]]);
        }
    }
    return dp[n][w];
}
int main()
{
    int item[]={5,4,6,3};
    int pro[]={10,40,30,50};
    int w=10;
    int n=sizeof(item)/sizeof(item[0]);
    cout<<"the maximum profit is:   ";
    cout<<knapsack(item,pro,w,n);

    cout<<endl<<endl;
    cout<<dpsol(item,pro,w,n);
}
