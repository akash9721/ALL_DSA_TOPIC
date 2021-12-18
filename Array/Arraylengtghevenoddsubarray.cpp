//10 12 14 7 8      length is 3
#include<bits/stdc++.h>
using namespace std;
int lengthis(int a[],int n)
{
    int res=1;
    int cur=1;
    for(int i=1;i<n;i++)
    {
        if((a[i]%2!=0 &&a[i-1]%2==0) || (a[i]%2==0 &&a[i-1]%2!=0))
        {
            cur++;
            res=max(res,cur);
        }
        else
        {
            cur=1;
        }
    }
    return res;
}
int main()
{
    int a[]={5, 10, 20, 6, 3, 8};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<lengthis(a,n);
}
