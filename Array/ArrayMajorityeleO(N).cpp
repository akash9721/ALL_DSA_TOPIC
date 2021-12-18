#include<bits/stdc++.h>
using namespace std;
int majority(int a[],int n)
{
    int res=0,cnt=1;
    for(int i=1;i<n;i++)
    {
        if(a[res]==a[i])
            cnt++;
        else
            cnt--;
        if(cnt==0)
        {
            res=i;
            cnt=1;
        }
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[res]==a[i])
            count++;
    }
    if(count<=n/2)
        return -1;
    else
        return a[res];
}
int main()
{
    int a[]={1,13};
    cout<<majority(a,2);
}
