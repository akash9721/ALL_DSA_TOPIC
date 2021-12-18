#include<bits/stdc++.h>
using namespace std;
int trp(int a[],int n)
{
    int larr[n];
    int rarr[n];
    int res=0;

     larr[0]=a[0];
    for(int i=1;i<n;i++)
    {
        larr[i]=max(a[i],larr[i-1]);
    }
     rarr[n-1]=a[n-1];
    for(int i=n-2;i>=1;i--)
    {
        rarr[i]=max(a[i],rarr[i+1]);
    }
    for(int i=1;i<n-1;i++)
    {
       res+=(min(larr[i],rarr[i])-a[i]);
    }
    return res;
}
int main()
{
    int a[]={3,1,2,4,0,1,3,2};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"trapping water is"<<endl;
    cout<<trp(a,n);

}
