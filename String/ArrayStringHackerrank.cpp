#include<bits/stdc++.h>
using namespace std;
void cntquery(string str[],string qur[],int m,int n)
{
    for(int i=0;i<m;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(qur[i]==str[j])
                cnt++;
        }
        cout<<cnt<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    string str[n];
    for(int i=0;i<n;i++)
    {

        cin>>str[i];
    }
    int m;
    cin>>m;
    string qur[m];
    for(int j=0;j<m;j++)
    {

        cin>>qur[j];
    }
    cntquery(str,qur,m,n);
}
