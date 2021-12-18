#include<bits/stdc++.h>
using namespace std;
bool findpair(int a[],int n,int x)
{
    sort(a,a+n);
    int l,r;
    for(int i=0;i<n;i++)
    {
        l=i+1;
        r=n-1;
      while(l<r)
      {
        if((a[i]+a[l]+a[r])==x)
        {
            cout<<"pair is  "<<a[i]<<","<<a[l]<<","<<a[r];
            return true;
        }
        else if((a[i]+a[l]+a[r])>x)
            r--;
        else
            l++;
      }
   }
   return false;
}
int main()
{
    int a[]={3,5,9,2,8,10,11};
    int n=sizeof(a)/sizeof(a[0]);
    int x=17;
    findpair(a,n,x);

}


