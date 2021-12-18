#include<bits/stdc++.h>
using namespace std;
void missingno(int a[],int n)
{
    int N=1e6+2;
    bool cnt[N]={false};
    for(int i=0;i<n;i++)
    {
        cnt[a[i]]=true;
    }
    for(int i=0;i<N;i++)
    {
        if(cnt[i]==false)
        {
            cout<<i<<endl;
            break;
        }
    }
}
int main()
{
    int a[]={-7,5,4,9,2,15,1,6,0};
    int n=sizeof(a)/sizeof(a[0]);
    missingno(a,n);
}
