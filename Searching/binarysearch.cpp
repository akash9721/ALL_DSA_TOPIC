#include<bits/stdc++.h>
using namespace std;
int bserch(int a[],int n,int m)
{
    int low=0;
    int high=n-1;
    while(low<high)
    {
        int mid=(low+high)/2;
        if(a[mid]==m)
            return mid;
        else if(a[mid]>m)
            high=mid-1;
        else
            low=mid+1;
    }
    return -1;
}


int brs(int a[],int low,int high,int x)    //recusive fun
{
    if(low>high)
    return -1;
    int mid=(low+high)/2;
    if(a[mid]==x)
        return mid;
    else if(a[mid]>x)
        return brs(a,low,mid-1,x);
    else
        return brs(a,mid+1,high,x);
}
int main()
{
    int a[]={20,30,40,50,60,70,80};
    int n=sizeof(a)/sizeof(a[0]);
    int m=60;
   // int bs=bserch(a,n,m);
    int bs=brs(a,0,n-1,m);
    cout<<"element found at : "<<bs;
}
