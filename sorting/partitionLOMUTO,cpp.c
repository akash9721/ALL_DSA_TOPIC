#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int l,int h)
{
    int pivot=a[h];
    int i=l-1;
    for(int j=l;j<n-1;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[h]);
    return i+1;
}

int main()
{
    int a[]={10,80,30,90,40,50,70};
    int n=sizeof(a)/sizeof(a[0]);
    partition(a,0,n-1);
    cout<<"partition array is"<<endl;
    for(int x:a)
    {
        cout<<x<<" ";
    }
}
