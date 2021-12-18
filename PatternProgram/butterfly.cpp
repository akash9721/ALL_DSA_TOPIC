#include<bits/stdc++.h>
using namespace std;
void butterfly(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j ||i+j==n-1 ||j==0 ||j==n-1)
            {
                cout<<"*";
            }
            else
                cout<<" ";
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
