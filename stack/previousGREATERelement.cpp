#include<bits/stdc++.h>
using namespace std;
void stockspan(int a[],int n)
{
    stack<int> s;
    s.push(a[0]);
    cout<<"-1"<<" ";
    for(int i=1;i<n;i++)
    {
        while(s.empty()==false && s.top()<=a[i])
        {
            s.pop();
        }
        int span=s.empty()?-1:s.top();
        cout<<span<<" ";
        s.push(a[i]);
    }
}
int main()
{
    int a[]={20,30,10,5,15};
    int n=sizeof(a)/sizeof(a[0]);
    stockspan(a,n);
}

