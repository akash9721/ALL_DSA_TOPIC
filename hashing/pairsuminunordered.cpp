#include<bits/stdc++.h>
using namespace std;
bool pairsum1(int a[],int n,int sum)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==sum)
                return true;
        }
    }
    return false;

}
bool pairsum2(int a[],int n,int sum)
{
   sort(a,a+n);
   int i=0;
   int j=n-1;
   while(i<j)
   {
       if(a[i]+a[j]==sum)
        return true;
       else if(a[i]+a[j]>sum)
        j--;
       else
        i++;
   }
   return false;

}
bool pairsum3(int a[],int n,int sum)
{
   unordered_set<int> s;
   for(int i=0;i<n;i++)
   {
       if(s.find(sum-a[i])!=s.end())
       {
           return true;
       }
       s.insert(a[i]);
   }
   return false;

}
int main()
{
    int a[]={3,2,8,15,-8};
    int n=sizeof(a)/sizeof(a[0]);
    int sum=17;
    //cout<<pairsum1(a,n,sum);
   // cout<<pairsum2(a,n,sum);
      cout<<pairsum3(a,n,sum);
}
