#include<bits/stdc++.h>
using namespace std;
void countone(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
                cnt++;
        }
        if(cnt%2!=0)
        {
            cout<<a[i]<<" ";
        }
    }
}

int countno1(int a[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        res=res^a[i];
    }
    return res;
}
int main()
{
    int a[]={1,2,3,2,4,3,5,1,5,1,1};
    int n=sizeof(a)/sizeof(a[0]);
   // countone(a,n);

    cout<<countno1(a,n);
}
