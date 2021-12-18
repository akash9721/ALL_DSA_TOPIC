#include<bits/stdc++.h>
using namespace std;
int maxcon1(int a[],int n)
{
    int res=0;
    int zero;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
           zero=0;
        }
        else
        {
          zero++;
          res=max(zero,res);
        }
    }
    return res;
}
int main()
{
    int a[]={0,1,1,1,0,0,1,1,0,0,1,0,1,1,1,1,1,0,0,1};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"maximum consicutive 1 is :"<<maxcon1(a,n);
}
