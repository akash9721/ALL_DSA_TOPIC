#include<bits/stdc++.h>
using namespace std;
int noof1(int a[],int n)
{
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==0)
            low=mid+1;
        else
        {
            if(mid==0 || a[mid-1]==0)
                return (n-mid);
            else
               high=mid-1;

        }

    }
}
int main()
{
    int a[]={0,0,1,1,1,1};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<noof1(a,n);
}
