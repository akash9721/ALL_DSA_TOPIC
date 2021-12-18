#include<bits/stdc++.h>
using namespace std;
void movezero(int a[],int n)
{
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            swap(a[i],a[cnt]);
            cnt++;
        }
    }
}


int main()
{
    int a[]={10,20,0,5,2,0,0,7,0};
    int n=sizeof(a)/sizeof(a[0]);
   // movezero(a,n);
    cout<<"new array is"<<endl;
    for(int i:a)
    {
       cout<<i<<" ";
    }

}
