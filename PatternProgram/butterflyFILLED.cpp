#include<bits/stdc++.h>
using namespace std;
void butterfly(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
          cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    cout<<"enter row no"<<endl;
    int n;
    cin>>n;
    butterfly(n);
}

