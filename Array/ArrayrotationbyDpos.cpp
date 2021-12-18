#include<bits/stdc++.h>
using namespace std;
void reversear(int a[],int low,int high)
{
    while(low<high)
    {
        swap(a[low],a[high]);
        low++;
        high--;
    }
}
void bydplace(int a[],int n,int d)
{
    reversear(a,0,d-1);
    reversear(a,d,n-1);
    reversear(a,0,n-1);
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
    int d;
    cout<<"\nenter pos from where you want rotate";
    cin>>d;
    cout<<"\nnew array"<<endl;
    bydplace(a,n,d);
    for(int i:a)
    {
        cout<<i<<" ";
    }

}

