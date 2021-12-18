#include<bits/stdc++.h>
using namespace std;
int mergemediam(int a[],int b[],int n,int m)
{
  int c[m+n];
  for(int i=0;i<n;i++)
  {
      c[i]=a[i];
  }
  for(int i=0;i<m;i++)
  {
      c[n+i]=b[i];
  }
  sort(c,c+n+m);
  int len=sizeof(c)/sizeof(c[0]);
  int k=len/2;
  return c[k];

}
int main()
{
    int a[] = {1,2,3,4,5};
    int b[] = {3,4,5,6,7,8};
    int n=a.size();
    cout<<n;
    int m=sizeof(b)/sizeof(b[0]);
  // cout<< mergemediam(a,b,n,m);
}
