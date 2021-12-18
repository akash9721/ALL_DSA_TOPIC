#include<bits/stdc++.h>
using namespace std;

int nfebo(int n)
{
    if(n<=1)
        return n;
    else
        return nfebo(n-1)+nfebo(n-2);
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<nfebo(i)<<" ";
    }

}
