#include<bits/stdc++.h>
using namespace std;
int disinct(int a[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        bool flag=false;
        for(int j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                flag=true;
                break;
            }
        }
        if(flag==false)
            res++;
    }
    return res;
}
int main()
{
    int a[]={10,20,10,30,40,20,10};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<disinct(a,n);
}
