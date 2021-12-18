#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int l,int h)
{
    int pivot=a[l];
    int i=l-1;
    int j=h+1;
    while(true)
    {
        do
        {
            i++;
        }while(a[i]<pivot);
        do
        {
            j--;
        }while(a[j]>pivot);
        if(i>=j)
            return j;
        swap(a[i],a[j]);
    }
}
int main()
{
    int a[]={5,3,8,4,2,7,1,10};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<partition(a,0,n-1)<<endl;
    for(int x:a)
    {
        cout<<x<<" ";
    }
}
