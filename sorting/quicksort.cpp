#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int l,int h)
{
    int pivot=a[h];
    int i=l-1;
    for(int j=l;j<h;j++)
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
void quicksort(int a[],int l,int h)
{
    if(l<h)
    {
        int p=partition(a,l,h);
        quicksort(a,l,p-1);
        quicksort(a,p+1,h);
    }
}

int main()
{
    int a[]={10,80,30,90,40,50,70};
    int n=sizeof(a)/sizeof(a[0]);
    quicksort(a,0,n-1);
    cout<<"sorted array is"<<endl;
    for(int x:a)
    {
        cout<<x<<" ";
    }
}


