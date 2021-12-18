#include<bits/stdc++.h>
using namespace std;
int smallmisingno(int a[],int start,int end)
{
    if(start>end)
        return end+1;
    if(start!=a[start])
        return start;

    int mid=(start+end)/2;
    if(a[mid]==mid)
        return smallmisingno(a,mid+1,end);
    return smallmisingno(a,0,mid);
}
int main()
{
    int a[]={0,1,2,3,4,5,6,7,10};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<smallmisingno(a,0,n-1);
}
