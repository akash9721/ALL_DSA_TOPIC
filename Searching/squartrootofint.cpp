#include<bits/stdc++.h>
using namespace std;
int srt(int n)
{
    int i=1;
    while(i*i<=n)
    {
        i++;
    }
    return(i-1);
}
int main()
{
  int n;
  cin>>n;
  cout<<(float)sqrt(n);

 // cout<<srt(n);
}
