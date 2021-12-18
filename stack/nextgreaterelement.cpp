#include<bits/stdc++.h>
using namespace std;
void stockspan(int a[],int n)
{
    vector<int> v;
    stack<int> s;
    s.push(a[n-1]);
    v.push_back(-1);
    for(int i=n-2;i>=0;i--)
    {
        while(s.empty()==false && s.top()<=a[i] )
        {
            s.pop();
        }
        int ng=s.empty()?-1:s.top();
        v.push_back(ng);
        s.push(a[i]);

    }
    reverse(v.begin(),v.end());
    for(auto x:v)
    {
        cout<<x<<" ";
    }

}
int main()
{
    int a[]={5,15,10,8,6,12,9,18};
    int n=sizeof(a)/sizeof(a[0]);
    stockspan(a,n);
}

