#include<bits/stdc++.h>
using namespace std;
int indexofLO(int a[],int low,int high,int x)   //recursive
{
    if(low>high)
        return -1;
    int mid=(low+high)/2;
    if(x>a[mid])
        return indexofLO(a,mid+1,high,x);
    else if(x<a[mid])
        return indexofLO(a,low,mid-1,x);
    else
    {
        if(mid==0 || a[mid+1]!=a[mid])
            return mid;
        else
            return indexofLO(a,mid+1,high,x);
    }

}
int main()
{
    int a[]={5,10,10,15,20,20,20};
    int n=sizeof(a)/sizeof(a[0]);
    int x=20;

    cout<<indexofLO(a,0,n-1,x);
}

