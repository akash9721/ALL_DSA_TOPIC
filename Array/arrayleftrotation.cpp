#include<bits/stdc++.h>
using namespace std;
void leftrotate(int a[],int n,int d)
{
    int ii=0;
    while(ii<d)
    {
    int temp=a[0];
    for(int i=1;i<n;i++)
    {
        a[i-1]=a[i];
    }
    a[n-1]=temp;
    ii++;
    }

}
int main()
{
    int a[]={1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"old array"<<endl;
    for(int i:a)
    {
        cout<<i<<" ";
    }
    leftrotate(a,n,2);
    cout<<"\nnew array"<<endl;
    for(int i:a)
    {
        cout<<i<<" ";
    }
}

