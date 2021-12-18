#include<bits/stdc++.h>
using namespace std;
void negpos(int a[],int n)
{
    int temp[n],i=0;
    for(int j=0;j<n;j++)
    {
        if(a[j]%2!=0)
        {
            temp[i++]=a[j];
        }
    }
    for(int j=0;j<n;j++)
    {
        if(a[j]%2==0)
        {
            temp[i++]=a[j];
        }
    }
    for(int j=0;j<n;j++)
    {
        a[j]=temp[j];
    }
     for(int j=0;j<n;j++)
    {
        cout<<a[j]<<" ";
    }
}
int main()
{
    int a[]={2,4,3,6,49,5,8};
    int n=sizeof(a)/sizeof(a[0]);
    negpos(a,n);
}

