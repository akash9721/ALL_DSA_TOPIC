#include<bits/stdc++.h>
using namespace std;
int uniqueel(int a[],int n)
{
    int len=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]!=a[len-1])
        {
            a[len]=a[i];
            len++;
        }
    }
    return len;
}
void show(vector<int> vv)
{
    for(int i:vv)
    {
        cout<<i<<" ";
    }
}
int main()
{
    int a[]={10,20,0,5,2,0,0,7,0};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"before removing duplicate ele"<<endl;    //use only ascending order
    for(int x:a)
    {
        cout<<x<<" ";
    }
    int q=uniqueel(a,n);
    cout<<"\nafter removing duplicate element"<<endl;
    for(int i=0;i<q;i++)
    {
        cout<<a[i]<<" ";
    }




    cout<<endl<<endl<<endl<<endl;
    cout<<"unique element using vector "<<endl;
    vector<int> v(a,a+n);
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    show(v);

}
