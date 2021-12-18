#include<bits/stdc++.h>
using namespace std;
bool findpair(int a[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((a[i]+a[j])==x)
            {
                cout<<"pair with given sun "<<x<<" is ("<<a[i]<<","<<a[j]<<")"<<endl;
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int a[]={3,5,9,2,8,10,11};
    int n=sizeof(a)/sizeof(a[0]);
    int x=17;
    if(findpair(a,n,x))
        cout<<"sum is present "<<endl;
    else
        cout<<"sum is not present";
}
