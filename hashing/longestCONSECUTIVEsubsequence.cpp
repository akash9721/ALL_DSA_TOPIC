#include<bits/stdc++.h>
using namespace std;
int longestconc(int a[],int n)
{
    unordered_set<int> s;
    int res=0;
    for(int i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(s.find(a[i]-1)==s.end())
        {
            int cnt=1;
            while(s.find(cnt+a[i])!=s.end())
            {
                cnt++;
            }
            res=max(res,cnt);
        }
    }
    return res;
}
int main()
{
    int a[]={1,4,2,6,3,9,12,65};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<longestconc(a,n);
}
