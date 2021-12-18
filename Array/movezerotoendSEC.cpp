#include<bits/stdc++.h>
using namespace std;
void movezero(int a[],int n)
{
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            swap(a[i],a[j]);
            j++;
        }
    }
}
int main()
{
    int a[]={1,0,2,0,1,0,7,0,9,10};
    int n=sizeof(a)/sizeof(a[0]);
    movezero(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
