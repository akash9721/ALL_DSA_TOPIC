#include<bits/stdc++.h>
using namespace std;
void butterfly(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
          cout<<"*";
        }
        int space=2*n-2*i;
        for(int i=1;i<=space;i++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
          cout<<"*";
        }
        cout<<endl;
    }

    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
          cout<<"*";
        }
        int space=2*n-2*i;
        for(int i=1;i<=space;i++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
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


