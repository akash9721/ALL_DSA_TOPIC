#include<bits/stdc++.h>
using namespace std;
void interarr(int a[],int b[],int n,int m)
{
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(i>0 && a[i-1]==a[i])
        {
            i++;
            continue;
        }
        if(j>0 && b[j-1]==b[j])
        {
            j++;
            continue;
        }
        if(a[i]<b[j])
        {

            i++;
        }
        else if(a[i]>b[j])
        {

            j++;
        }
        else
        {
            cout<<a[i]<<" ";
            i++;
            j++;
        }
    }

}
int main()
{
    int a[]={3,5,10,10,10,15,15,20};
    int n=sizeof(a)/sizeof(a[0]);
    int b[]={5,10,10,15,30};
    int m=sizeof(b)/sizeof(b[0]);
    interarr(a,b,n,m);
}
