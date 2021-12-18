#include<bits/stdc++.h>
using namespace std;
void reverse(int a[],int low,int high)
{
    while(low<high)
    {
        swap(a[low],a[high]);
        low++;
        high--;
    }
}
void leftrotate(int a[],int n,int d)
{
    if(d==0)
        return;
    d=d%n;
    reverse(a,0,d-1);
    reverse(a,d,n-1);
    reverse(a,0,n-1);

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
    for(int ii:a)
    {
        cout<<ii<<" ";
    }
}


