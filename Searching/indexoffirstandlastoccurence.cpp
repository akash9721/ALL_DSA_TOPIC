#include<bits/stdc++.h>
using namespace std;
int indexoffirst(int a[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
            return i;
    }
    return -1;
}

int indexofFO(int a[],int low,int high,int x)   //recursive
{
    if(low>high)
        return -1;
    int mid=(low+high)/2;
    if(x>a[mid])
        return indexofFO(a,mid+1,high,x);
    else if(x<a[mid])
        return indexofFO(a,low,mid-1,x);
    else
    {
        if(mid==0 || a[mid-1]!=a[mid])
            return mid;
        else
            return indexofFO(a,low,mid-1,x);
    }

}
int main()
{
    int a[]={5,10,10,15,20,20,20};
    int n=sizeof(a)/sizeof(a[0]);
    int x=20;
    cout<<indexoffirst(a,n,x)<<endl;;
    cout<<indexofFO(a,0,n-1,x);
}
