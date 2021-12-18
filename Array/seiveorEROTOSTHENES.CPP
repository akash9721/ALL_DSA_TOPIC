#include<bits/stdc++.h>
using namespace std;
void cntprime(int high)
{
    int v[high]={0};
    for(int i=2;i<=high;i++)
    {
        if(v[i]==0)
        {
            cout<<i<<" ";
            for(int j=2*i;j<=high;j+=i)
            {
                v[j]=1;
            }
        }
    }
}
int main()
{
    int high;
    cin>>high;
    cntprime(high);
}
