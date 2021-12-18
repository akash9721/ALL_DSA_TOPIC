
#include<bits/stdc++.h>
using namespace std;
int majority(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int cnt=1;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            cnt++;
        }
        if(cnt>(n/2))
            return i;
    }
    return -1;
}
int main()
{
    int a[]={3,8,4,8,8};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"Majority element are :"<<majority(a,n);
}
