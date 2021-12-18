#include<bits/stdc++.h>
using namespace std;
void uniqueele(int a[],int n)
{
    vector<int> v(a,a+n);
    int nn=*max_element(v.begin(),v.end());
    int b[nn]={0};
    for(int i=0;i<n;i++)
    {
        b[a[i]]++;
    }
    for(int i=0;i<=nn;i++)
    {
        if(b[i]>0)
        {
          cout<<i<<" ";
        }
    }
}
int main()
{
    int a[]={1,3,6,2,7,4,9,3,9,4,5,3,7,2,6,3,5,12,3};
    int n=sizeof(a)/sizeof(a[0]);
    uniqueele(a,n);

}
