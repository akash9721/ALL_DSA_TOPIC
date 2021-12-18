#include<bits/stdc++.h>
using namespace std;
int LIS(int a[],int n)
{
    int lis[n];
    lis[0]=1;
    for(int i=1;i<n;i++)
    {
        lis[i]=1;
        for(int j=0;j<i;j++)
        {
            if(a[i]>a[j] && lis[i]<lis[j]+1)
            {
                lis[i]=lis[j]+1;
            }
        }
    }
    return *max_element(lis,lis+n);

}
int main()
{
    int a[]={3,10,20,4,6,7};
    int n=sizeof(a)/sizeof(a[0]);
    int len=LIS(a,n);
    cout<<"Longest increasing subsequence: "<<len;
}
