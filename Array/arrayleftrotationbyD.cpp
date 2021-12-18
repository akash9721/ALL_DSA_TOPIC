#include<bits/stdc++.h>
using namespace std;
void bydplace(int a[],int n)
{
    int d=3;
    for(int i=d;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    for(int i=0;i<d;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"old array"<<endl;
    for(int i:a)
    {
        cout<<i<<" ";
    }
    cout<<"\nnew array"<<endl;
    bydplace(a,n);

}
