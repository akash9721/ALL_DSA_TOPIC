
#include<bits/stdc++.h>
using namespace std;
bool cntprime(int n)
{
   if(n==1)
    return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    int low,high;
    cin>>low>>high;
    for(int i=low;i<=high;i++)
    {
       if(cntprime(i))
        cout<<i<<" ";
    }
    }
}
