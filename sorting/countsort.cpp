#include<bits/stdc++.h>
using namespace std;
void cntsort(int a[],int n)
{
    int max=*max_element(a,a+n);
    int c[max+1];
    for(int i=0;i<max+1;i++)
    {
        c[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        c[a[i]]++;
    }
    int i=0,j=0;

    while(i<max+1)
    {
        if(c[i]>0)
        {
            a[j++]=i;
            c[i]--;
        }
        else
            i++;
    }
}


int main()
{
    int a[]={6,3,9,10,15,6,8,12,3,6};
    int n=sizeof(a)/sizeof(a[0]);
    cntsort(a,n);
    cout<<"sorted array is"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
