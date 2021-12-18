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
void quicksort(int a[],int l,int h)
{
    if(l<h)
    {
        int p=partition(a,l,h);
        quicksort(a,0,p);
        quicksort(a,p+1,h);
    }
}
int main()
{
    int a[]={5,3,8,4,2,7,1,10};
    int n=sizeof(a)/sizeof(a[0]);
    //cout<<partition(a,0,n-1)<<endl;
    quicksort(a,0,n-1);
    for(int x:a)
    {
        cout<<x<<" ";
    }
}
