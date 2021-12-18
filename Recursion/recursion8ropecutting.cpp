#include<bits/stdc++.h>
using namespace std;
int ropecutting(int n,int a,int b,int c)
{
    if(n==0)
        return 0;
    if(n<=-1)
        return -1;
    int res=max(ropecutting(n-a,a,b,c),
            max(ropecutting(n-b,a,b,c),
            ropecutting(n-c,a,b,c)));

     if(res==-1)
         return -1;
     return res+1;
}
int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    cout<<ropecutting(n,a,b,c);
}
