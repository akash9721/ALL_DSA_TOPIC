

#include <bits/stdc++.h>

using namespace std;
int partition(int a[],int l,int h)
{
    int i=l;
    int j=h;
    int pivot=a[l];
    while(i<j)
    {
        while(a[i]<=pivot)
        i++;
        while(a[j]>pivot)
        j--;
        if(i<j)
        swap(a[i],a[j]);
    }
    swap(a[l],a[j]);
    return j;
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
    int l=0;
    int h=n-1;
    quicksort(a,l,h);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}

