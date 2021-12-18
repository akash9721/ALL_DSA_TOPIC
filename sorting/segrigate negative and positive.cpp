#include<bits/stdc++.h>
using namespace std;
void negpos(int a[],int n)
{
    int temp[n],i=0;
    for(int j=0;j<n;j++)
    {
        if(a[j]<0)
        {
            temp[i++]=a[j];
        }
    }
    for(int j=0;j<n;j++)
    {
        if(a[j]>0)
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
void seg(int a[],int n)
{
    int l=-1;
    int h=n;
    while(1)
    {
        do
        {
            l++;
        }while(a[l]<0);
        do
        {
            h--;
        }while(a[h]>0);
        if(l>=h)
            return;
        swap(a[l],a[h]);
    }
}


int main()
{
    int a[]={13,-12,18,-10};
    int n=sizeof(a)/sizeof(a[0]);
   // negpos(a,n);
      seg(a,n);
       for(int j=0;j<n;j++)
    {
        cout<<a[j]<<" ";
    }
}
