#include<bits/stdc++.h>
using namespace std;
int missing(int a[],int n)
{
    int maxi=*max_element(a,a+n);
    int sum=maxi*(maxi+1)/2;
    for(int i=0;i<n;i++)
    {
        sum-=a[i];
    }
    return sum;
}
int main()
{
    int a[]={2 ,3 ,4 ,1 ,6 ,7};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<missing(a,n);
}
